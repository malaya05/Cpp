#ifndef TESTING_H
#define TESTING_H

#include "AnyList.h"

#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

const vector<vector<int>> VECTOR{
	{ 10, 20, 30 },
	{ 87, 34, 65, 23 },
	{ 138, 453, 253, 948, 372, 568, 903 },
};

const size_t VECTOR_SIZE = 3;

void testInsertFront();
void testInsertBack();

void testGetNumOfElem();

void testRemoveItem();
void testMergeLists();
void testReplaceItem();
void testSearch();

void testReversePrint();

void testEmptyList();
void testCopyConstructor();
void testAssignmentOperator();



#endif

