/*
	Alaya, Anas

	CS A250
	February 17, 2017
	
	Lab 3
*/

#include "AnyList.h"

//Definition function getNumOfItems
int AnyList::getNumOfItems() const
{
	return count;
}

//Definition of function insertBack
void AnyList::insertBack(int data)
{
	if (count == 0)
	{
		ptrToFirst = new Node(data, nullptr);
	}
	
	else
	{
		Node * advance = ptrToFirst;

		while (advance->getPtrToNext() != nullptr)
		{
			advance = advance->getPtrToNext();
		}

		advance->setPtrToNext(new Node(data, nullptr));
	}

	count++;
}

//Declaration function search
bool AnyList::search(int toFind) const
{
	if (ptrToFirst == nullptr)
	{
		cerr << "The list is empty." << endl;
	}

	else
	{
		Node* current = ptrToFirst;

		while (current != nullptr)
		{
			if (current->getData() == toFind)
				return true;

			current = current->getPtrToNext();
		}
	}

	return false;
}


//Definition function commonEnds
bool AnyList::commonEnds(const AnyList& theList)const
{
	if (ptrToFirst == nullptr || theList.ptrToFirst == nullptr)
		return false;

	else if (ptrToFirst->getData() == theList.ptrToFirst->getData())
	{
		Node *refToLast = ptrToFirst; 

		while (refToLast->getPtrToNext() != nullptr)
		{
			refToLast = refToLast->getPtrToNext();
		}

		Node* refToOtherLast = theList.ptrToFirst;

		while (refToOtherLast->getPtrToNext() != nullptr)
		{
			refToOtherLast = refToOtherLast->getPtrToNext();
		}

		return (refToLast->getData() == refToOtherLast->getData());
	}
	else
		return false;
}

