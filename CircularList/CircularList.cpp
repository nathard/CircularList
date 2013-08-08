//
//  CircularList.cpp
//  CirularList
//	SIT221 Assignment 1 Question 2
//  Created by Nathan Harding on 20/08/11.
//  Student No. 210602527
//

#include "CircularList.h"
#include <iostream>
#include <cstdlib>

using namespace std;

// Instantiate class template
template class CircularList<int>;

typedef node<int> Node;

// Default Constructor
template <class Type>
CircularList<Type>::CircularList(Type emptyValue)
{
	curr = NULL;	// set current pointer to null
    empval = emptyValue;	// set empty value to return when list is empty
}

// Insert before current node
template <class Type>
void CircularList<Type>::InsertBefore(Type data)
{
	// Create first node
    Node *newNode; 
    if(curr == NULL)
    {
        newNode = new Node();
        curr = newNode;
        newNode->prev = curr;	// Assign new node to itself,
        newNode->next = curr;	// to create loop.
        newNode->value = data;	// Assign input value
        
    }
    else
	// Insert before current
    {
        newNode = new Node();
        newNode->prev = curr->prev;		// Assign newNode's previous link to current's previous link
        newNode->next = curr;			// Assign newNode next link to current
        newNode->value = data;			// Assign input value
        newNode->prev->next = newNode;	// Attach between nodes..
        newNode->next->prev = newNode;	//
		curr = newNode;					// ..and create loop
    }
    
}

// Insert after current node
template <class Type>
void CircularList<Type>::InsertAfter(Type data)
{
	// Call InsertBefore method to create first node
	Node *newNode;
    if (curr == NULL)
    {
        InsertBefore(data);
    }
    else
	// Insert after current
    {    
        newNode = new Node();
        newNode->next = curr->next ;	//
        newNode->prev  = curr;			//
        newNode->value = data;			//	Same as InsertBefore in reverse
        newNode->prev->next = newNode;	//
        newNode->next->prev = newNode;	//
		curr = newNode;					//
    }
}

// Get value of the current node
template <class Type>
Type CircularList<Type>::GetValue()
{
	while (curr != NULL)
	{
		return curr->value;	// return current value
	}

	return empval;	// or empty value if null
}

// Retrieve value of next node
template <class Type>
Type CircularList<Type>::NextValue()
{
	while (curr != NULL)
	{
		curr = curr->next;	// Assign current to next node
		return curr->value;	// Return value of data
	}
		
	return empval; // or empty value if null
}

// Retrieve value of previous node
template <class Type>
Type CircularList<Type>::PreviousValue()
{
	while (curr != NULL)
	{
		curr = curr->prev; // Assign current to previous node
		return curr->value;	// Return data
	}

	return empval;	// or empty value if null
}

// Destructor
template <class Type>
CircularList<Type>::~CircularList()
{
	// Initialize temporary node to current
    node<Type> *tmp;
	tmp = curr;
	curr = tmp->next;
	tmp->value = NULL;
	// Use tmp to cycle through and delete nodes
	while (curr->value != NULL) 
	{
         tmp = curr->next;
		 delete curr;
		 curr = tmp;  	
    } 
	
	delete curr;	// remove final node
    cout << "\nList de-allocated.";
}

