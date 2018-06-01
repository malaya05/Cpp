#ifndef ANYLIST_H
#define ANYLIST_H

#include<iostream>
#include <string>	
#include <list>
#include <vector>
#include <algorithm> 

using namespace std;

class AnyList
{
	// Declaration overloaded insertion operator
	friend ostream& operator<<(ostream& out, const AnyList& otherList);

public:
	// Declaration default constructor
	AnyList();

	// Declaration function insertFront
	void insertFront(int num) const;
	
	// Declaration function insertBack
	void insertBack(int num) const;

	// Declaration function getNumOfElem
	int getNumOfElem() const;
	
	// Declaration function removeItem
	void removeItem(int num) const;

	// Declaration function mergeLists
	void mergeLists(const AnyList& otherList) const;
		
	// Declaration function replaceItem
	void replaceItem(int oldItem, int newItem) const;

	// Declaration function search
	bool search(int num) const;

	// Declaration function reversePrint
	void AnyList::reversePrint() const;
	
	// Declaration function emptyList
	void emptyList() const;

	// Declaration copy constructor
	AnyList(const AnyList& otherList);

	// Declaration overloaded assignment operator
	AnyList& operator=(const AnyList& otherList);

	// Declaration destructor 
	~AnyList();

private:
	list<int> *ptr;	
};

#endif