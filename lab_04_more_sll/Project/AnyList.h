#ifndef ANYLIST_H
#define ANYLIST_H

#include<iostream>
#include <string>				
using namespace std;

class Node
{
public:
	Node() { next = nullptr; }
    Node(const string& theData, Node *nextNode) : data(theData), next(nextNode){}
    Node* getNext( ) const { return next; }
	string getData( ) const { return data; }
    void setData(const string& theData) { data = theData; }
    void setNext(Node *nextNode) { next = nextNode; }
	~Node(){}
private:
    string data;		
    Node *next;		//pointer that points to next node
};


class AnyList
{
public:
	AnyList();	

	void insertBack(const string& newData);

	void print() const;

	void destroyList();

	~AnyList();

	/*************************************************************************/
	string getFirstElement() const;
	// Declaration of function getFirstElement

	void deleteFirstNode();
	// Declaration of function deleteFirstNode

	void deleteLastNode();
	// Declaration of function deleteLastNode

	void replaceData(const string& stored, const string& newString);
	// Declaration of function replaceData



private:
	Node *first;			//pointer to point to the first node in the list
	int numOfItems;		//keeps track of number of nodes in the list
};

#endif