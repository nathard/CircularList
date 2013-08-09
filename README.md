CircularList
============

Circular Doubly Linked List Library in C++

Class Documentation
--------------
CircularList Class Reference

The CircularList class is a class of objects stored in a circular doubly linked list. 
It can be used to dynamically link objects together of an ADT; meaning you can store data of any type in the list. 
Methods to insert and retrieve data are provided to demonstrate its use.

Public Member Functions
•	•	CircularList (Type emptyValue)
Description: Creates a circular linked list of objects and accepts a value to return when the list is empty.
Usage: 
CircularList<Type>  *ListName; 
ListName = new CircularList<Type>(emptyValue);
Where Type is your designated type of object (e.g. String, integer, double, class), ListName is the name for your container of objects and emptyValue is the value you want to return when the list is empty (e.g. “0”, “list empty”)
Example:
CircularList<int> *CL;
CL = new CircularList<int>(0);

•	•	void InsertBefore (Type data)
Description: Inserts a node containing input data before the currently selected node in the list.
Usage: ListName->InsertBefore(data);
Where ListName is your CircularList and data is the type of data contained in your node (e.g. “Fred”, 2011)
Example:
CL->InsertBefore(2010);

•	•	void InsertAfter (Type data)
Description: Inserts a node into the list after the currently selected node and assigns data from input.
Usage: ListName->InsertAfter(data);
Where ListName is your CircularList of objects and data is your input.
Example:
CL->InsertAfter(2012)

•	•	Type GetValue ()
Description: Returns the value of the data stored in the current node.
Usage: expression ListName->GetValue()
Where expression is the operation you are performing on the value (e.g. cout, var =/+/-/*) and ListName is your CircularList.
Example:
cout <<  “This year is “ << CL->GetValue();
Output: This year is 2011

•	•	Type NextValue ()
Description: Returns the value of the data stored in the next node of the list.
Usage: expression ListName->NextValue()
Where expression is the operation you are performing on the value (e.g. cout, var =/+/-/*) and ListName is your CircularList.
Example:
cout <<  “Next year is “ << CL->NextValue();
Output: Next year is 2012

•	•	Type PreviousValue ()
Description: Returns the value of the data stored in the previous node of the list.
Usage: expression ListName->PreviousValue()
Where expression is the operation you are performing on the value (e.g. cout, var =/+/-/*) and ListName is your CircularList.
Example:
cout <<  “Last year was “ << CL->PreviousValue();
Output: Last year was 2010

•	•	~CircularList()
Description: Destroys the list, by removing each node and its associated values from the list
Usage: ListName->~CircularList();
Where ListName is your CircularList.
Example:
CL->~ CircularList();
Output: List De-allocated.

node Struct Reference

The node struct contains the values required to construct a list of nodes. 
The struct is declared as an ADT so you can store any type of node in your lists.

Usage: 
node<Type> *nodeName;
nodeName = new node<Type>;
Where nodeName is the name of the node you are instantiating (e.g current, head, tail, tmp) and Type is the object type of node to use such as int, string etc.
Example: 
node<int> *currentNode;
currentNode = new node<int>;
Public Attributes
•	•	Type value
Descriptions: Stores a value of any type inside the node
Usage: expression nodeName->value
Where expression is the operation performed on node’s value and nodeName is the name of the node you are referring to (e.g. current, new, tmp)
Example:
int data = 1;
currentNode->value = data

•	•	node< Type > * next
Description: Pointer to the next node
Usage: expression nodeName->next
Where expression is the operation performed on the node’s next pointer and nodeName is the name of the node you are referring to (e.g. current, new, tmp)
Example:
newNode = currentNode->next 
currentNode->next = tmpNode

•	•	node< Type > * prev
Description: Pointer to the previous node
Usage: expression nodeName->next
Where expression is the operation performed on the node’s previous pointer and nodeName is the name of the node you are referring to (e.g. current, new, tmp)
Example:
newNode  =  currentNode->prev 
currentNode->prev = tmpNode


The documentation for this struct was generated from the following file:
•	•	CircularList.h

