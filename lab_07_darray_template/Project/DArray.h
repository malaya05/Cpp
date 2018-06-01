/*
	Alaya, Anas

	CS A250
	March 27, 2017

	Lab 7
*/

#ifndef DARRAY_H
#define DARRAY_H

#include <iostream>
using namespace std;

template<typename T>
class DArray
{
	template<typename T>
	friend ostream& operator<<(ostream& out, const DArray<T>& arr);

public:
    DArray( );
    DArray(int);
	DArray(const DArray<T>&);

    void addElement(const T&);

	int getCapacity() const;
	int getNumOfElem() const;	

	T& operator[](int idx) const;
	DArray<T>& operator=(const DArray<T>& otherArray);
	
	~DArray( ); 

	//*********************************************
	void deleteElement(const T&);
	// Declaration function deleteElement

	void deleteAtIdx(int index);
	// Declaration function deleteAtIdx

	bool search(const T& Tofind) const;
	// Declaration function search

	void emptyArray();
	// Declaration function emptyArray

	bool isEmpty() const;
	// Declaration function isEmpty

	bool isFull() const;
	// Declaration function isFull

private:
    T *a;			//will point to an int (it will be an array)
    int capacity;	//capacity of the array
    int numOfElem;		//total number of elements in the array
};
#endif