#include "AnyList.h"
#include "Testing.h"

#include <iostream>
using namespace std;

int main()
{
	cout << "*********************************\n"
		<< "*                               *\n"
		<< "*  TESTING getFirstElement...   *\n"
		<< "*                               *\n"
		<< "*********************************\n\n";

	test_getFirstElement();

	cout << "*********************************\n"
		<< "*                               *\n"
		<< "*  TESTING deleteFirstNode...   *\n"
		<< "*                               *\n"
		<< "*********************************\n\n";

	test_deleteFirstNode();

	cout << "*********************************\n"
		<< "*                               *\n"
		<< "*   TESTING deleteLastNode...   *\n"
		<< "*                               *\n"
		<< "*********************************\n\n";

	test_deleteLastNode();

	cout << "*********************************\n"
		<< "*                               *\n"
		<< "*     TESTING replaceData...    *\n"
		<< "*                               *\n"
		<< "*********************************\n\n";

	test_replaceData();

	cout << endl;
	system("Pause");
	return 0;
}
