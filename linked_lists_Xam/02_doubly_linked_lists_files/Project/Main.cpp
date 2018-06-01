/***********************************************

	Class DoublyList

************************************************/

#include "DoublyList.h"

#include <iostream>
using namespace std;

//void test_search(const DoublyList& aDList, int elemToSearch);
//void test_delete(DoublyList& aDList, int elemToDelete);
//
int main()
{
	DoublyList intList;

	//cout << "TEST insertFront, search...\n\n";
	intList.insertFront(10);
	intList.insertFront(9);
	intList.insertFront(8);
	intList.insertFront(7);
	intList.insertFront(6);

	DoublyList myList;

	myList.insertFront(1);
	myList.insertFront(2);
	myList.insertFront(3);
	myList.insertFront(4);
	myList.insertFront(5);
	myList.insertFront(6);
	myList.insertFront(7);

	cout << "Original list: ";
	myList.print();
	cout << endl;
	myList.swap();
	//myList.moE();
	//myList.deleteMid();
	//appendLists(intList, myList);
	myList.print();

	//cout << "Original list: ";
	//intList.print();
	//cout << "\nAfter moveFirstToEnd: ";
	
	//intList.print();

	/*int num = 5;
	int arr[5] = { 10, 20,0 };
	copyListParamToArrayParam(intList, arr, num);

	cout << "arr is: ";
	for (int i = 0; i < num; ++i)
		cout << arr[i] << " ";
	cout << endl;*/

	system("Pause");
	return 0;
}
	/*test_search(intList, 1);
	test_search(intList, 3);
	test_search(intList, 5);
	test_search(intList, 100);

	cout << "\nTEST delete...\n\n";
	cout << "Delete 200: ";
	intList.deleteNode(200);
	test_delete(intList, 1);
	test_delete(intList, 4);
	test_delete(intList, 3);
	test_delete(intList, 5);
	test_delete(intList, 2);
	cout << "Deleting from an empty list: ";
	intList.deleteNode(100);

	cout << endl << endl;
	system("Pause");
	return 0;
}

void test_search(const DoublyList& aDList, int elemToSearch)
{
	cout << "Element " << elemToSearch << ": ";
	cout << ((aDList.search(elemToSearch)) ? "Found.\n" : "Not found.\n");		
}

void test_delete(DoublyList& aDList, int elemToDelete)
{
	aDList.deleteNode(elemToDelete);
	cout << "Element to delete: " << elemToDelete << " => ";
	cout << ((aDList.search(elemToDelete)) ? "Found.\n" : "Not found.\n");
}*/