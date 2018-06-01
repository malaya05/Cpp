#include "Testing.h"

void call_getFirstElement(AnyList& aList, string& element)
{
	// Uncomment when testing your function getFirstElement
	element = aList.getFirstElement();
}

void call_deleteFirstNode(AnyList& aList)
{
	// Uncomment when testing your function deleteFirstNode
	aList.deleteFirstNode();
}

void call_deleteLastNode(AnyList& aList)
{
	// Uncomment when testing your function deleteLastNode
	aList.deleteLastNode();
}

void call_replaceData( AnyList& aList,
	const string& key, const string& replacement)
{
	// Uncomment when testing your function commonEnds
	aList.replaceData(key, replacement);
}
