/*
	Alaya, Anas

	CS A250
	March 26, 2017

	Lab 8
*/

#include "DoublyList.h"

// overloaded insertion operator
ostream& operator<<(ostream& out, const DoublyList& obj)
{
	if (obj.count == 0)
		out << "List is empty.";
	else
	{
		Node* temp = obj.first;
		while (temp != nullptr)
		{
			out << temp->getData() << " ";
			temp = temp->getNext();
		}
	}
	return out;
}

// copy constructor
DoublyList::DoublyList(const DoublyList& obj)
{
	first = nullptr;
	last = nullptr;
	count = 0;

	Node* temp = obj.first;
	while(temp!= nullptr)
	{
		this->insertBack(temp->getData());
		temp = temp->getNext();
	}
}

// overloaded assignment operator
DoublyList& DoublyList::operator=(const DoublyList& obj)
{
	if (this == &obj)
		cerr << "Attempted assignment to itself." << endl;
	else
	{
		Node* temp = obj.first;
		Node* callingTemp = first;

		if (first == nullptr) // Calling object is empty
		{
			while (temp != nullptr)
			{
				insertBack(temp->getData());
				temp = temp->getNext();
		    }
		}

		else if (obj.count == 0) // param is empty
		{
			destroyList();
		}

		else if (obj.count == count) // same count
		{
			while (temp != nullptr)
			{
				callingTemp->setData(temp->getData());
				temp = temp->getNext();
				callingTemp = callingTemp->getNext();
			}
		}

		else if (count < obj.count) // param has more nodes
		{
			while (callingTemp != nullptr)
			{
				callingTemp->setData(temp->getData());
				temp = temp->getNext();
				callingTemp = callingTemp->getNext();
			}
			while (temp != nullptr)
			{
				insertBack(temp->getData());
				temp = temp->getNext();
			}
		}

		else // calling object has more nodes
		{
			while (temp != nullptr)
			{
				callingTemp->setData(temp->getData());
				temp = temp->getNext();
				callingTemp = callingTemp->getNext();
			}
			last = callingTemp->getPrev();
			last->setNext(nullptr);
			while (callingTemp != nullptr)
			{
				Node* curr = callingTemp;
				callingTemp = callingTemp->getNext();
				delete curr;
				curr = nullptr;
			}
			count = obj.count;
		}
	}
	return *this;
}