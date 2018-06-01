

#include "AnyList.h"

//Definition function getNumOfItems
int AnyList::getNumOfItems()const
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
bool AnyList::commonEnds(AnyList& theList)const
{
	if (ptrToFirst == nullptr || theList.ptrToFirst == nullptr)
		return false;
	else if (ptrToFirst->getData() == theList.ptrToFirst->getData())
	{
		Node *refToLast = ptrToFirst; //->getPtrToNext();

		while (refToLast != nullptr)
		{
			refToLast = refToLast->getPtrToNext();
		}

		Node* refToOtherLast = theList.ptrToFirst;

		while (refToOtherLast != nullptr)
		{
			refToOtherLast = refToOtherLast->getPtrToNext();
		}

		return (refToLast == refToOtherLast);
	}
	else
		return false;
}

