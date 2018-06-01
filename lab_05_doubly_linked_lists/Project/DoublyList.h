#ifndef DOUBLYLIST_H
#define DOUBLYLIST_H

#include <string>
#include <iostream>
using namespace std;

class Node
{
public:
	Node() : data(0), prev(NULL), next(NULL) {}
	Node(int newData, Node *newPrev, Node *newNext)
		: data(newData), prev(newPrev), next(newNext) {}
	int getData() const { return data; }
	Node *getPrev() const { return prev; }
	Node *getNext() const { return next; }
	void setData(const int& newData) { data = newData; }
	void setPrev(Node *newPrev) { prev = newPrev; }
	void setNext(Node *newNext) { next = newNext; }
	~Node() {}
private:
	int data;
	Node *prev;
	Node *next;
};


class DoublyList
{
public:
	DoublyList(); 
	
	void insertFront(int newData);

	~DoublyList();

	void destroyList();

	/********************************************************
		Functions to implement
	*********************************************************/
	bool isEmpty() const;
	// Declaration function isEmpty

	void print() const;
	// Declaration function print

	void reversePrint() const;
	// Declaration function reversePrint

	int front() const;
	// Declaration function front

	int back() const;
	// Declaration function back

	void copyToList( DoublyList& dList);
	// Declaration function copyToList

	void insertInOrder(int) ;
	// Declaration function insertInOrder


	int getCount() const;

private:
    Node *first;	// pointer to the first node on the list
    Node *last;		// pointer to the last node on the list
	int count;		// number of nodes in the list
};

#endif