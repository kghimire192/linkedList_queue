/**
 * @file Node.h
 * The header file for the Node class.
 * @author Kanchan Ghimire
 * @date Oct 2016
 */

#ifndef NODE_NODE_H
#define NODE_NODE_H

#include <string>
using namespace std;

/**
 * A class representing a linked list storing strings.
 */
class Node {
private:
    /** the information stored in this node */
    string data;

    /** a link to the next node */
    Node* next;

public:
    /**
     * constructor for a default (empty) node
     */
    Node();

    /**
     * Getter for data
     * @return a string representing the data
     */
    string getData() const;

    /**
     * Setter for data
     * @param data the new data to include in the string
     */
    void setData(const string data);

    /**
     * Getter for the next pointer
     * @return a pointer to the next node
     */
    Node *getNext() const;

    /**
     * Setter for the next pointer
     * @param next pointer to the next node
     */
    void setNext(Node *next);

    /**
     * A string-based representation of this node
     * @return a string that represents this node
     */
    string toString();
};


#endif //NODE_NODE_H