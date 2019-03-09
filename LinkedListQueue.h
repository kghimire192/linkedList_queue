/**  * @file LinkedListQueue.h  
* The header file for the LinkedListQueue class. 
* @author Kanchan Ghimire  
* @date Oct 2016  */

#ifndef LINKEDLISTQUEUE_H 
#define LINKEDLISTQUEUE_H

#include "Node.h"
using namespace std;

class LinkedListQueue 
{ 
private:     
	Node *frontPtr;      // pointer to the first node
	Node *rearPtr;      // pointer to the last node
public:     
	/**      
	* Default constructor, initialize frontPtr to nullptr and also initialize rearPtr to nullptr      
	*/     
	LinkedListQueue();

    /**      
	* Default destructor, free memory     
	*/     
	~LinkedListQueue();

    /**      
	* Return true if the queue is empty     
	* @return true if queue is empty, false otherwise     
	*/     
	bool isEmpty() const;

    /**      
	* Add a new item to the rear of the queue      
	* @param newItem the item to be added     
	*/     
	void enqueue(string newItem);

    /**      
	* Remove an item from the queue      
	* @return the first item     
	* @throws an exception if an empty queue is dequeued.     
	*/     
	string dequeue() throw(logic_error);

    /**     
	* Return a string representation of the queue      
	* @return a string representing the queue     
	*/     
	string toString() const; 
};
#endif 