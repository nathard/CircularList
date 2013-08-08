//
//  CircularList.h
//  CirularList
//	SIT221 Assignment 1 Question 2
//  Created by Nathan Harding on 20/08/11.
//  Student No. 210602527
//

#ifndef _CircularList_h
#define _CircularList_h
#include <iostream>
#include <cstdlib>

using namespace std;

// Declare list node as struct
template <class Type>
struct node
{
public:
    Type value;
    node<Type> *next;
    node<Type> *prev;
};

// Declare template class for circular list
template <class Type>
class CircularList
{
public:
	// Declare Prototypes
    CircularList(Type emptyValue);
    void InsertBefore(Type data);
    void InsertAfter(Type data);
    Type GetValue();
    Type NextValue();
    Type PreviousValue();
    ~CircularList();
    
private:
    // Declare variables
	Type empval;
    node<Type> *curr;

};

#endif
