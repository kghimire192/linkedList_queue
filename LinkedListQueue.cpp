/**  * @file LinkedListQueue.cpp  
* The implementation file for the LinkedListQueue class.  
* @author Kanchan Ghimire  
* @date Oct 2016  */

#include "LinkedListQueue.h"
#include <iostream>
#include <String>
using namespace std;

// default constructor 
LinkedListQueue::LinkedListQueue()
{     
	frontPtr = nullptr;       // empty queue 
	rearPtr = nullptr;     //empty queue
}

//default destructor 
LinkedListQueue::~LinkedListQueue() 
{     
	while (!isEmpty()) 
	{         
		dequeue();              // discard contents    
	}

    // NOTE:  For instructional purposes only, we will print when called     
	std::cout << "Destructor was called." << std::endl; 
}

// return true if queue is empty 
bool LinkedListQueue::isEmpty() const 
{     
	return (frontPtr == nullptr); 
}

// add an item to the rear of the queue 
void LinkedListQueue::enqueue(string newItem) 
{     
	// allocate memory for a new item, fill it with new data     
	Node *newNode = new Node();          // allocate memory    
	newNode->setData(newItem);
    // connect this to the queue    
	if(rearPtr == nullptr)
	{
		rearPtr = newNode;
		frontPtr = newNode;
	}
	else
	{
	  rearPtr->setNext(newNode);           // make next point to whatever is there now     
	  rearPtr = newNode;                   // reset top to this node 
	}
}

// remove an item from the front of the queue 
string LinkedListQueue::dequeue() throw(logic_error) 
{     
	string topItem = "";                // where we will store the data     
	Node *tempPtr = nullptr;            // temporary pointer to node to be deleted
    // dequeuing an empty queue throws an exception     
	if (isEmpty()) 
	{         
		throw logic_error("Error:  Attempt to dequeue an empty queue!");    
	}
    // otherwise, store the data on top     
	topItem = frontPtr->getData();

    // temporarily store this node's address, so we can delete it.     
	tempPtr = frontPtr;

    // reset frontPtr to the next node     
	frontPtr = frontPtr->getNext();
	if (frontPtr == nullptr)
	{
		rearPtr = nullptr;
	}

    // free this node's memory    
	delete tempPtr;

    tempPtr = nullptr;
    
	// return the data     
	return topItem;
}

// return a string representing the contents of the queue 
string LinkedListQueue::toString() const 
{     
	Node *tempPtr = nullptr;            // used to traverse the list    
	string out_string = "";             // string to return     
	int i=0;                            // used to count nodes
    
	// check to see if it is empty     
	if (isEmpty()) 
	{        
		return "List is empty.\n";    
	}
    // traverse the list, storing the data    
	tempPtr = frontPtr;     
	while (tempPtr != nullptr)
	{         
		// store this item    
		out_string += "|" + tempPtr->getData() + "|" + "\n";         // move to the next       
		i++;         
		tempPtr = tempPtr->getNext();    
	}    
	// return the final string    
	return out_string; 
}