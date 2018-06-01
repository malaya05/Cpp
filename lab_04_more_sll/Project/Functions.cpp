/*
	Alaya, Anas

	CS A250
	February 18, 2017

	Lab 4
*/

#include "AnyList.h"

// Definition of function getFirstElement
string AnyList::getFirstElement() const
{
	if(first == nullptr) // OR  if(numOfItems == 0)
		return "List is empty.";
	else
		return first->getData();

}
// Definition of function deleteFirstNode
void AnyList::deleteFirstNode()
{
	if (first == nullptr) 
		cerr << "Cannot delete from an empty List.";
	else
	{
		Node* current = first;
		first = first->getNext();
		delete current;
		current = nullptr;
		numOfItems--;
	}
}
// Definition of function deleteLastNode
void AnyList::deleteLastNode()
{
	if(numOfItems == 0)
		cerr << "Cannot delete from an empty List.";

	else
	{
		if (numOfItems == 1) 
		{

		//Node* current = first;
		delete first;
		first = nullptr;
		//delete current;
	//	current = nullptr;
		}
		else
		{
			Node* current = first->getNext();
			Node* tailCurrent = first;

			while (current->getNext() != nullptr)
				{
					current = current->getNext();
					tailCurrent = tailCurrent->getNext();
				}

			tailCurrent->setNext(nullptr);
			delete current;
			current = nullptr;
		}
		numOfItems--;
	}
	
}
// Definition of function replaceData
void AnyList::replaceData(const string& stored, const string& newString)
{
	if (numOfItems == 0)
		cerr << "List is empty";
	else
	{
		Node* current = first;
		while (current->getData() != stored && current->getNext() != nullptr)
		{
			current = current->getNext();
		}

		if (current->getData() == stored)
			current->setData(newString);
	}
}
