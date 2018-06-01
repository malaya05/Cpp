/***********************************************

	Class DoublyList

************************************************/

#include "DoublyList.h"
//#include "Functions.cpp"

#include <iostream>
using namespace std;

int main()
{
	DoublyList intList;

	intList.insertInOrder(37);
	intList.insertInOrder(53);
	intList.insertInOrder(21);
	intList.insertInOrder(18);
	intList.insertInOrder(73);
	intList.insertInOrder(49);
	intList.insertInOrder(49);
	// my code
	cout << "\n  the count is: " << intList.getCount() << "  )" <<endl;
	// end of my code

	cout << "TESTING: insertInOrder() and print()" 
		<< "\n\nEXPECTED OUTPUT: "
		<< "\nList: 18  21  37  49  53  73\n";
	cout << "\nACTUAL OUTPUT:";
	cout << "\nList: ";
	intList.print();

	cout << "\n\n-----------------------------------------------------\n";
	cout << "TESTING: printReverse()" 
		<< "\n\nEXPECTED OUTPUT: "
		<< "\nList (reversed): 73  53  49  37  21  18\n";
	cout << "\nACTUAL OUTPUT:";
	cout << "\nList (reversed): ";
	intList.reversePrint();

	cout << "\n\n-----------------------------------------------------\n";
	cout << "FINAL TESTING: Check first and last nodes" 
		<< "\n\nEXPECTED OUTPUT: "
		<< "\nFirst node data: 18"
		<< "\nLast node data: 73\n";
	cout << "\nACTUAL OUTPUT:";
	cout << "\nFirst node data: " << intList.front()	<< "\nLast node data: "
		<< intList.back() << endl;

	intList.destroyList();	
	
	cout << "\nYour testing cases...\n";
	// TEST function copyToList
	DoublyList myList;
	DoublyList paramList;

	myList.insertInOrder(1);
	myList.insertInOrder(3);
	myList.insertInOrder(2);
	//myList.insertInOrder(4);
	//myList.insertInOrder(5);
	//myList.insertInOrder(6);
    myList.print();

	paramList.insertInOrder(-1);
	paramList.insertInOrder(-2); 
	paramList.insertInOrder(-4);
	paramList.insertInOrder(-5);
	paramList.insertInOrder(-3);
	cout << "the param: "; paramList.print();
	cout << "\n truth:           " << endl;
	myList.copyToList(paramList);

	paramList.print();
	// end of me twsting
	cout << endl << endl;
	system("Pause");
	return 0;
}
