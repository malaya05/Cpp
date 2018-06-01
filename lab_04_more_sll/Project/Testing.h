#ifndef TESTING_H
#define TESTING_H

#include "AnyList.h"

#include <iostream>
#include <string>
using namespace std;

void test_getFirstElement();
void test_deleteFirstNode();
void test_deleteLastNode();
void test_replaceData();

void call_getFirstElement(AnyList& aList, string& element);
void call_deleteFirstNode(AnyList& aList);
void call_deleteLastNode(AnyList& aList);
void call_replaceData( AnyList& aList,
	const string& key, const string& replacement);

#endif

