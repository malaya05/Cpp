#include "Testing.h"

void testAssignmentOperator()
{
	cout << "TEST: overloaded assignment operator\n\n";
	{
		for (size_t i = 0; i < VECTOR_SIZE; ++i)
		{
			AnyList list1, list2;
			for (size_t j = 0; j < VECTOR[i].size(); ++j)
				list1.insertBack(VECTOR[i][j]);

			cout << "  List 1 is: ";
			ostream_iterator<int> screen(cout, " ");
			copy(VECTOR[i].cbegin(), VECTOR[i].cend(), screen);
			cout << "\nYour output: ";
			cout << list1;

			cout << "\n  List 2 is: (empty)";
			cout << "\nYour output: ";
			cout << list2;

			cout << "\nCopy elements into list ...";
			list2 = list1;
			cout << "\nList 1 is still: ";
			copy(VECTOR[i].cbegin(), VECTOR[i].cend(), screen);
			cout << "\n    Your output: ";
			cout << list1;
			cout << "\n List 2 is now: ";
			copy(VECTOR[i].cbegin(), VECTOR[i].cend(), screen);
			cout << "\nYour output is: ";
			cout << list1;
			cout << "\n=> Checking if it is a shallow copy...";
			list1.insertBack(100);
			cout << "\n               List 2 is still: ";
			copy(VECTOR[i].cbegin(), VECTOR[i].cend(), screen);
			cout << "\nYour output should be the same: ";
			cout << list2;
			cout << endl << endl;
		}
	}
	cout << "\n--------------------------------------\n";
}