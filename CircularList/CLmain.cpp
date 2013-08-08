//
//  main.cpp
//  CirularList
//	SIT221 Assignment 1 Question 2
//  Created by Nathan Harding on 20/08/11.
//  Student No. 210602527
//
#include <cstdlib>
#include <iostream>
#include "CircularList.h"

using namespace std;

typedef CircularList<int> CircList;

void main (int argc, const char * argv[])
{
	// Create circular list
    CircList  *cl;
    cl = new CircList(0);
	cout << "List created using an empty value of " << cl->GetValue();

	// cycle through empty list
	cout << "\nEmpty list:";
	cout << "\n\tGoing backwards, I see channel " << cl->PreviousValue();
	cout << "\n\tGoing backwards, I see channel " << cl->PreviousValue();
	cout << "\n\tGoing backwards, I see channel " << cl->PreviousValue();
	cout << "\n\tCurrent channel is " << cl->GetValue();
	cout << "\n\tGoing forwards, I see channel " << cl->NextValue();
	cout << "\n\tGoing forwards, I see channel " << cl->NextValue();
	cout << "\n\tGoing forwards, I see channel " << cl->NextValue();

	// Insert a node and cycle through list
	cl->InsertBefore(2);
	cout << "\nSingle node:";
	cout << "\n\tGoing backwards, I see channel " << cl->PreviousValue();
	cout << "\n\tGoing backwards, I see channel " << cl->PreviousValue();
	cout << "\n\tGoing backwards, I see channel " << cl->PreviousValue();
	cout << "\n\tCurrent channel is " << cl->GetValue();
	cout << "\n\tGoing forwards, I see channel " << cl->NextValue();
	cout << "\n\tGoing forwards, I see channel " << cl->NextValue();
	cout << "\n\tGoing forwards, I see channel " << cl->NextValue();

	// Insert multiple nodes and cycle through list
	cl->InsertAfter(3);
	cl->InsertAfter(7);
	cl->InsertAfter(9);
	cl->InsertAfter(10);
	cl->InsertAfter(44);
	cout << "\nMultiple nodes:";
	cout << "\n\tGoing forwards, I see channel " << cl->NextValue();
	cout << "\n\tGoing forwards, I see channel " << cl->NextValue();
	cout << "\n\tGoing forwards, I see channel " << cl->NextValue();
	cout << "\n\tGoing forwards, I see channel " << cl->NextValue();
	cout << "\n\tGoing forwards, I see channel " << cl->NextValue();
	cout << "\n\tGoing forwards, I see channel " << cl->NextValue();
	cout << "\n\tGoing forwards, I see channel " << cl->NextValue();
	cout << "\n\tGoing forwards, I see channel " << cl->NextValue();
	cout << "\n\tGoing forwards, I see channel " << cl->NextValue();
	cout << "\n\tGoing forwards, I see channel " << cl->NextValue();
	cout << "\n\tGoing forwards, I see channel " << cl->NextValue();
	cout << "\n\tGoing forwards, I see channel " << cl->NextValue();
	cout << "\n\tCurrent channel is " << cl->GetValue();
	cout << "\n\tGoing backwards, I see channel " << cl->PreviousValue();
	cout << "\n\tGoing backwards, I see channel " << cl->PreviousValue();
	cout << "\n\tGoing backwards, I see channel " << cl->PreviousValue();
	cout << "\n\tGoing backwards, I see channel " << cl->PreviousValue();
	cout << "\n\tGoing backwards, I see channel " << cl->PreviousValue();
	cout << "\n\tGoing backwards, I see channel " << cl->PreviousValue();
	cout << "\n\tGoing backwards, I see channel " << cl->PreviousValue();
	cout << "\n\tGoing backwards, I see channel " << cl->PreviousValue();
	cout << "\n\tGoing backwards, I see channel " << cl->PreviousValue();
	cout << "\n\tGoing backwards, I see channel " << cl->PreviousValue();
	cout << "\n\tGoing backwards, I see channel " << cl->PreviousValue();
	cout << "\n\tGoing backwards, I see channel " << cl->PreviousValue();

	// Destroy the list
	cl->~CircularList();
	
	cout << "\nEnd of program\n";
	
    
};

// Backward traversal
/*
	int temp = cl->GetValue();
	if (cl->GetValue() != NULL)
	{
		do
		{ 
			cout << "\n\tGoing backwards, I see channel " << cl->GetValue();

		} while (temp != cl->PreviousValue());
	}
	*/


// Forward traversal
	/*
	temp = cl->GetValue();
	if (cl->GetValue() != NULL)
	{
		do
		{ 
			cout << "\n\tGoing forwards, I see channel " << cl->GetValue();
			
		} while (temp != cl->NextValue());
	}
	*/