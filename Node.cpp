/**
 * @file Node.cpp
 * The implementation file for the Node class.
 * @author Kanchan Ghimire
 * @date Oct 2016
 */

#include "Node.h"

// default constructor
Node::Node() 
{
    data = "";              // empty string
    next = nullptr;         // points to nothing
}

// getter for data
string Node::getData() const 
{
    return data;
}

// setter for data
void Node::setData(const string newData) 
{
    data = newData;
}

// getter for next pointer
Node *Node::getNext() const 
{
    return next;
}

// setter for next pointer
void Node::setNext(Node *newNext) {
    next = newNext;
}

// a string-based representation of this node
string Node::toString() {
    string out_string = "This node contains: --" + data + "-- ";
    if (next != nullptr) {
        out_string += "and points to the node containing: --" + next->getData() + "--\n";
    } else {
        out_string += "and points to nothing.\n";
    }
    return out_string;
}