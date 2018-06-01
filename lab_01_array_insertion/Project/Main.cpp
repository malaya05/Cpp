/*
	Anas Alaya
	CS A250
	Feb 04,2017

	Lab 1
*/

#include <iostream>
using namespace std;

const int CAPACITY = 10;

// Declaration function insertAtIndex
// Your code here...
void insertAtIndex(int a[], int& numOfElements, int element, int idx);
//void insertAtIndex(int myArray[], int &numOfElem, int value, int index);

#include "Testing.hxx"

int main()
{
	testCases();

	cout << endl;
	system("Pause");
	return 0;
}

// Definition function insertAtIndex
// Your code here...
//void insertAtIndex(int myArray[], int &numOfElem, int value, int index)
//{
//	if (numOfElem < CAPACITY && index <= numOfElem)
//	{
//		numOfElem++;
//		for (int i = numOfElem; i > index; i--)
//			myArray[i] = myArray[i - 1];
//			myArray[index] = value;
//
//	}
//	else if (numOfElem == CAPACITY)
//		cerr << "Array is full. Cannot insert another element." << endl;
//	else if (index >= CAPACITY) 
//		cerr << "The array cannot have more than " << CAPACITY << " elements" << endl;
//	else
//		cerr << "You can only insert contiguous elements in the array." << endl;
//}
void insertAtIndex(int a[], int& numOfElements, int element, int idx) {
	if (numOfElements == CAPACITY)
		cerr << "Array is full. Cannot insert another element." << endl;
	else if (idx >= CAPACITY)
		cerr << "The array cannot have more than " << CAPACITY << "elements." << endl;
	else if (idx > numOfElements)
		cerr << "You can only insert contiguous elements in the array." <<
		endl; else {
		// shift numbers
		for (int i = numOfElements - 1; i >= idx; --i)
		a[i + 1] = a[i];
		// insert element
		a[idx] = element;
		// update number of elements in the array
		++numOfElements;
	}
}