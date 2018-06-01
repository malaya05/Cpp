#ifndef DOUBLYLIST_H
#define DOUBLYLIST_H

#include <string>
#include <iostream>
using namespace std;

class Node
{
public:
    Node () : data(0), previousLink(nullptr), nextLink(nullptr) {}
    Node (int theData, Node *previous, Node *next)
            : data(theData), previousLink(previous), nextLink(next) {}
    int getData( ) const { return data; }
	Node *getPreviousLink( ) const { return previousLink; }
	Node *getNextLink( ) const { return nextLink; }    
    void setData(int theData) { data = theData; }
    void setPreviousLink(Node *pointer) { previousLink = pointer; }
	void setNextLink(Node *pointer) { nextLink = pointer; }   
	~Node(){}
private:
    int data;
    Node *previousLink;
	Node *nextLink;    
};

class DoublyList
{
public:
	DoublyList(); 
		// constructor
	
	void insertFront(int newData);
		// insertFront - Inserts a node to the front of the list
		// @param int - The data to insert in the node

	bool search(int searchData) const;
		// search const - Searches a node with the given data
		// @param int - The data to search for
		// @return bool - Returns true if the data is found, 
		//                  false otherwise.

	void deleteNode(int deleteData);
		// deleteNode - Deletes the node that contains the given data
		// @param int - The data in the node that needs to be deleted
	
	void destroyList();
		// destroyList - Destroys all the nodes in the list

	~DoublyList();
		// destructor - Calls the function destroyList



	// our functions
	void moE();
	void moveFirstToEnd();
	void print() const;
	Node *getFirst() const { return first; }
	int getCount() const { return count; }
	Node *getLast() const { return last; }
	void setCount(int n) { count = n; }
	void setLast(Node *n) { last = n; }
	void deleteMid();
	void swap();

private:
    Node *first;	// pointer to the first node on the list
    Node *last;		// pointer to the last node on the list
	int count;		// number of nodes in the list
};

// 
void copyListParamToArrayParam(const DoublyList &list, int array[], int n);
void appendLists(const DoublyList &list, DoublyList &list2);

#endif