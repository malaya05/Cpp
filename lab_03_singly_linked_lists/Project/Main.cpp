#include "AnyList.h"

#include <iostream>
using namespace std;

int main()
{
	/*
		A very short list of test cases.
	*/

	AnyList myList;
	myList.insertBack(20);
	myList.insertBack(3);
	myList.insertBack(4);

	cout << "My list: ";
	myList.print();
	cout << "\nNumber of elements: " << myList.getNumOfItems() << endl;

	cout << ((myList.search(4)) ? "\nElement 4 found." : "\nElement 4 not found.");
	cout << ((myList.search(100)) ? "\nElement 100 found." : "\nElement 100 not found.");
	cout << endl;

	AnyList yourList;
	yourList.insertBack(20);
	yourList.insertBack(30);
	yourList.insertBack(4);

	cout << "\nYour list: ";
	yourList.print();

	cout << "\nCommon ends? ";
	cout << ((myList.commonEnds(yourList)) ? "Yes." : "No.");
	cout << endl;

	cout << endl;
	system("Pause");
	return 0;
}

