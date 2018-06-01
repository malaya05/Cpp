#include "Testing.h"
#include "AnyList.h"

#include <iostream>
#include <string>
using namespace std;

int main()
{
	testInsertFront();  // need to overload insertion operator
	testInsertBack();

	testGetNumOfElem();

	testRemoveItem();	
	testMergeLists();		
	testReplaceItem();
	testSearch();

	testReversePrint();

	testEmptyList();
	testCopyConstructor();
	testAssignmentOperator();

	cout << endl;
	system("Pause");
	return 0;
}
