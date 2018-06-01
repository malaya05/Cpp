//
//int main()
//{
//	cout << "TEST 1 ------------------------\n\n";
//	DArray<int> a1;
//	cout << "Capacity: " << a1.getCapacity() << endl;
//	cout << "Number of elements: " << a1.getNumOfElem() << endl;
//	cout << "Empty? " << (a1.isEmpty() ? "True" : "False") << endl;
//	cout << "Full? " << (a1.isFull() ? "True" : "False") << endl;
//
//	cout << endl;
//
//	cout << "\nTEST 2 ------------------------\n\n";
//	DArray<int> a2(5);
//	a2.addElement(3);
//	cout << "Array is: " << a2 << endl;
//	cout << "Capacity: " << a2.getCapacity() << endl;
//	cout << "Number of elements: " << a2.getNumOfElem() << endl;
//	cout << "Empty? " << (a2.isEmpty() ? "True" : "False") << endl;
//	cout << "Full? " << (a2.isFull() ? "True" : "False") << endl;
//	cout << "Element at idx 0: " << a2[0] << endl;
//	cout << "Empty the array..." << endl;
//	a2.emptyArray();
//	cout << "Empty? " << (a2.isEmpty() ? "True" : "False") << endl;
//
//	cout << endl;
//
//	cout << "\nTEST 3 ------------------------\n\n";
//	cout << "Re-populate..." << endl;
//	a2.addElement(21);
//	a2.addElement(53);
//	a2.addElement(64);
//	a2.addElement(19);
//	a2.addElement(43);
//	cout << "Array is: " << a2 << endl;
//	cout << "Capacity: " << a2.getCapacity() << endl;
//	cout << "Number of elements: " << a2.getNumOfElem() << endl;
//	cout << "Empty? " << (a2.isEmpty() ? "True." : "False") << endl;
//	cout << "Full? " << (a2.isFull() ? "True" : "False") << endl;
//	cout << "Element at last index: " << a2[a2.getNumOfElem() - 1] << endl;
//	cout << "Delete first element..." << endl;
//	a2.deleteElement(21);
//	cout << "After deletion: " << a2 << endl;
//	cout << "Delete last element..." << endl;
//	a2.deleteElement(43);
//	cout << "Array is: " << a2 << endl;
//	cout << "Number of elements: " << a2.getNumOfElem() << endl;
//	cout << "Empty? " << (a2.isEmpty() ? "True" : "False") << endl;
//	cout << "Full? " << (a2.isFull() ? "True" : "False") << endl;
//	cout << "Element at last index: " << a2[a2.getNumOfElem() - 1] << endl;
//	cout << "Delete remaining elements..." << endl;
//	a2.deleteElement(64);
//	a2.deleteElement(53);
//	a2.deleteElement(19);
//	cout << "Number of elements: " << a2.getNumOfElem() << endl;
//
//	cout << endl;
//
//	cout << "\nTEST 4 ------------------------\n\n";
//	cout << "Creating a DArray object of type Movie.\n\n";
//	DArray<Movie> movies(4);
//	Movie m1("Fight Club", 1999);
//	Movie m2("The Piano", 1993);
//	Movie m3("The Matrix", 1999);
//	Movie m4("The Day After Tomorrow", 2004);
//
//	movies.addElement(m1);
//	movies.addElement(m2);
//	movies.addElement(m3);
//	movies.addElement(m4);
//	cout << "Array is:\n " << movies << endl;
//	cout << "Capacity: " << movies.getCapacity() << endl;
//	cout << "Number of elements: " << movies.getNumOfElem() << endl;
//	cout << "Empty? " << (movies.isEmpty() ? "True" : "False") << endl;
//	cout << "Full? " << (movies.isFull() ? "True" : "False") << endl;
//	cout << "Element at idx 0: " << movies[0] << endl;
//
//	cout << "Empty the array..." << endl;
//	movies.emptyArray();
//	cout << "Empty? " << (movies.isEmpty() ? "True" : "False") << endl;
//
//	cout << endl;
//
//	cout << "\nTEST 5 ------------------------\n\n";
//	cout << "\nRe-populate in reverse order..." << endl;	
//	movies.addElement(m4);
//	movies.addElement(m3);
//	movies.addElement(m2);
//	movies.addElement(m1);
//	cout << "Array is:\n " << movies << endl;
//	cout << "Capacity: " << movies.getCapacity() << endl;
//	cout << "Number of elements: " << movies.getNumOfElem() << endl;
//	cout << "Empty? " << (movies.isEmpty() ? "True." : "False") << endl;
//	cout << "Full? " << (movies.isFull() ? "True" : "False") << endl;
//	cout << "Element at last index: " << movies[movies.getNumOfElem() - 1] << endl;
//
//	cout << "Delete first element..." << endl;
//	movies.deleteElement(m4);
//	cout << "After deletion:\n " << movies << endl;
//
//	cout << "Delete last element..." << endl;
//	movies.deleteElement(m1);
//	cout << "Array is:\n " << movies << endl;
//	cout << "Number of elements: " << movies.getNumOfElem() << endl;
//	cout << "Empty? " << (movies.isEmpty() ? "True" : "False") << endl;
//	cout << "Full? " << (movies.isFull() ? "True" : "False") << endl;
//	cout << "Element at last index: " << movies[movies.getNumOfElem() - 1] << endl;
//	cout << "Delete remaining elements..." << endl;
//	movies.deleteElement(m2);
//	movies.deleteElement(m3);
//	cout << "Number of elements: " << movies.getNumOfElem() << endl;
//
//	cout << endl;
//	system("Pause");
//    return 0;
//}

