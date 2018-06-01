/*
	Alaya, Anas

	CS A250
	March 4, 2017

	Lab 5
*/

#include "DoublyList.h"

// Definition function getCount
int DoublyList::getCount() const
{
	return count;
}

// Definition function isEmpty
bool DoublyList::isEmpty() const
{
	return(first == nullptr);
}

// Definition function print
void DoublyList::print() const
{
	Node* ptrNode = first;
	while (ptrNode != nullptr)
	{
		cout << ptrNode->getData()<< "  ";
		ptrNode = ptrNode->getNext();
	}
}

// Definition function reversePrint
void DoublyList::reversePrint() const
{
	Node* toLast = last;
	while (toLast != nullptr)
	{
		cout << toLast->getData() << "  ";
		toLast = toLast->getPrev();
	}
}

// Definition function front
int DoublyList::front() const
{
	return(first->getData());
}

// Definition function back
int DoublyList::back() const
{
	return (last->getData());
}

// Definition function copyToList
void DoublyList::copyToList( DoublyList& dList)
{
	Node* temp = first;
	while (temp != nullptr)
	{
		dList.insertFront(temp->getData());
		temp = temp->getNext();
	}
}

// Definition function insertInOrder 
void DoublyList::insertInOrder(int num)
{
	if (first == nullptr)
	{
		first = new Node(num, nullptr, nullptr);
		last = first;
	}
	else if (num <= first->getData())
	{
		Node * temp = new Node(num, nullptr, first);
		first->setPrev(temp);
		first = temp;
	}
	else
	{
		Node* current = first;
		while (current != nullptr)
		{
			if (num > current->getData() && current->getNext() == nullptr)
			{
				Node* newPtr = new Node(num, current, nullptr);
				last->setNext(newPtr);
				last = newPtr;
			}
			else if (num > current->getData() && num < current->getNext()->getData())
			{
				Node* temp = new Node(num, current, current->getNext());
				(current->getNext())->setPrev(temp);
				current->setNext(temp);
			}
			current = current->getNext();
		}
	}
	count++;
}