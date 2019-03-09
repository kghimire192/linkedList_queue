/**
 * @file NodeDriver.cpp
 * Testing the Node class.
 * @author Kanchan Ghimire
 * @date Oct 2016
 */


#include <iostream>
#include "Node.h"
#include "LinkedListQueue.h"


int main() {
 	LinkedListQueue myLinkedListObj;     //instantiate an object


	cout << "Welcome to Mocha Joe's. How may I help you?" << endl;


	string user_input = "";     //empty string
	string out_str = "";        //empty string
	string removed_item = "";   //empty string


	while(true)
	{
		cout << "Enter 'E' to enqueue a new order, or 'D' to dequeue an order, or 'closed' to quit" <<endl;
		user_input = "";               //empty string
		getline(cin, user_input);      //get user input

		try
		{
			//to enqueue
		    if (user_input == "e" || user_input == "E")
			{
			   cout << "Please enter your order: ";
			   getline(cin, user_input);
			   myLinkedListObj.enqueue(user_input);    //add to the rear of the queue

			   out_str = myLinkedListObj.toString();   //all the items in the queue
			   cout << "Orders to be filled: " << out_str << endl;
		     }

			//to dequeue
		   else if(user_input == "d" || user_input == "D")
		   {
			  removed_item = myLinkedListObj.dequeue();    //remove from the front of the queue, which is stored in removed_item
			  
			  cout << "Filled order: " << removed_item << endl;
			  out_str = myLinkedListObj.toString();      //all the items in the queue
			  cout << "Orders to be filled: " << out_str << endl;
		   }

			//to exit the program
		   else if (user_input == "closed")
		   {
			if(myLinkedListObj.isEmpty())    //if all the orders are filled
			 {
				 break;          //exit the loop, and quit the program
			 }
			 else
			 {
				cout << "Sorry, all the orders have not been filled yet, so we can't close the cafe" <<endl;
				continue;       //go to the next cycle of the while loop
			 }	
		   }


	    }

		//catch the exception, which is the logic_error
        catch (logic_error e)
        {
	      cout << e.what() << endl;     
		  continue;
         }	
	}


	    return 0;
}




