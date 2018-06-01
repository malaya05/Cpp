#include "Testing.h"

#include <iostream>
#include <iterator>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

void test_getFirstElement()
{
	vector< vector<string>> v1 = {
		{},
		{ "Spiderman" },
		{ "Storm", "Superman" },
		{ "Aquaman", "Elektra", "Superman", "Daredevil", "Wolverine", "Hulk", "Cyborg" },
	};

	int sizeV1 = static_cast<int>(v1.size());

	for (int i = 0; i < sizeV1; ++i)
	{
		// Create list and print it.
		AnyList list1;
		int sizeInnerV1 = static_cast<int>(v1[i].size());
		for (int j = 0; j < sizeInnerV1; ++j)
			list1.insertBack(v1[i].at(j));
		cout << "List is: ";
		list1.print();

		// Print out.
		cout << "\n     First element...";
		if (!v1[i].empty())
			cout << "\n        Expected: " << v1[i].at(0);
		else
			cout << "\n        Expected: List is empty.";
		string firstElement;
		call_getFirstElement(list1, firstElement);
		cout << "\n     Your output: " << firstElement;

		cout << "\n\n----------------------------------------\n";
	}
}

void test_deleteFirstNode()
{
	vector< vector<string>> v1 = {
		{},
		{ "Deadpool" },
		{ "Batman", "Thor" },
		{ "Donatello", "Michelangelo", "Raphael", "Leonardo", "Shredder" },
	};

	int sizeV1 = static_cast<int>(v1.size());

	for (int i = 0; i < sizeV1; ++i)
	{
		// Create list and print it.
		AnyList list1;
		int sizeInnerV1 = static_cast<int>(v1[i].size());
		for (int j = 0; j < sizeInnerV1; ++j)
			list1.insertBack(v1[i].at(j));
		cout << "List is: ";
		list1.print();

		// Print out.
		cout << "\n     Delete first node...";
		if (sizeInnerV1 == 0)
		{			
			cout << "\n        Expected: "
				<< "Cannot delete from an empty list. List is empty";
		}
		else if (sizeInnerV1 == 1)
		{
			cout << "\n        Expected: List is empty";
		}
		else
		{
			cout << "\n        Expected: ";
			for (int k = 1; k < sizeInnerV1; ++k)
				cout << v1[i].at(k) << " ";
		}
		cout << "\n     Your output: ";
		call_deleteFirstNode(list1);
		if (sizeInnerV1 == 0) cout << " ";
		list1.print();

		cout << "\n\n----------------------------------------\n";
	}
}

void test_deleteLastNode()
{
	vector< vector<string>> v1 = {
		{},
		{ "Spiderman" },
		{ "Storm", "Superman" },
		{ "Donatello", "Michelangelo", "Raphael", "Leonardo", "Shredder" },
	};

	int sizeV1 = static_cast<int>(v1.size());

	for (int i = 0; i < sizeV1; ++i)
	{
		// Create list and print it.
		AnyList list1;
		int sizeInnerV1 = static_cast<int>(v1[i].size());
		for (int j = 0; j < sizeInnerV1; ++j)
			list1.insertBack(v1[i].at(j));
		cout << "List is: ";
		list1.print();

		// Print out.
		cout << "\n     Delete last node...";
		if (sizeInnerV1 == 0)
		{
			cout << "\n        Expected: "
				<< "Cannot delete from an empty list. List is empty";
		}
		else if (sizeInnerV1 == 1)
		{
			cout << "\n        Expected: List is empty";
		}
		else
		{
			cout << "\n        Expected: ";
			for (int k = 0; k < (sizeInnerV1 - 1); ++k)
				cout << v1[i].at(k) << " ";
		}
		cout << "\n     Your output: ";
		call_deleteLastNode(list1);
		if (sizeInnerV1 == 0) cout << " ";
		list1.print();

		cout << "\n\n----------------------------------------\n";
	}
}

void test_replaceData()
{
	vector< vector<string>> v1 = {
		{},
		{ "Spiderman" },
		{ "Deadpool" },
		{ "Storm", "Superman" },
		{ "Batman", "Thor" },
		{ "Aquaman", "Elektra", "Superman", "Daredevil", "Wolverine", "Hulk", "Cyborg" },
		{ "Donatello", "Michelangelo", "Raphael", "Leonardo", "Shredder" },
		{ "Goku", "Gohan", "Piccolo", "Chi-chi", "Bulma" }
	};

	vector< vector<string>> replacements = {
		{ "Elektra", "Storm" },
		{ "Spiderman", "Deadpool" },
		{ "Wolverine", "Spiderman" },
		{ "Storm", "Elektra" },
		{ "Thor", "Hulk" },
		{ "Daredevil", "Deadpool" },
		{ "Shredder", "Splinter" },
		{ "Master Roshi", "Videl" }
	};

	int sizeV1 = static_cast<int>(v1.size());

	for (int i = 0; i < sizeV1; ++i)
	{
		// Create list and print it.
		AnyList list1;
		int sizeInnerV1 = static_cast<int>(v1[i].size());
		for (int j = 0; j < sizeInnerV1; ++j)
			list1.insertBack(v1[i].at(j));
		cout << "List is: ";
		list1.print();

		// Print out.
		cout << "\nReplace " << replacements[i].at(0) 
			<< " with " << replacements[i].at(1) << "...";
		if (sizeInnerV1 == 0)
		{
			cout << "\n        Expected: "
				<< "List is empty";
		}
		else
		{
			replace(v1[i].begin(), v1[i].end(), replacements[i].at(0), replacements[i].at(1));
			cout << "\n        Expected: ";
			for (int k = 0; k < sizeInnerV1; ++k)
				cout << v1[i].at(k) << " ";
		}
		cout << "\n     Your output: ";
		call_replaceData(list1, replacements[i].at(0), replacements[i].at(1));
		if (sizeInnerV1 != 0) list1.print();

		cout << "\n\n----------------------------------------\n";
	}
}