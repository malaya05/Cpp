#include "AnyList.h"

	//constructor
AnyList::AnyList()
{
	first = nullptr;
	numOfItems = 0;
}

	//insertFront
void AnyList::insertBack(const string& newData)
{	
	if (first == nullptr)
		first = new Node(newData, first);
	else
	{
		Node *current = first;
		while (current->getNext() != nullptr)
			current = current->getNext();
		//current is now pointing to the last node in the list
		current->setNext(new Node(newData, nullptr));
	}

	++numOfItems;
}

	//print
void AnyList::print() const
{
	if (first == nullptr)
	{
		cerr << "List is empty";
	}
	else
	{
		Node *current = first;	

		while (current != nullptr)	
		{						
			cout << current->getData() << " ";	 
			current = current->getNext();		
		}
	}
}

	//destroyList
void AnyList::destroyList()
{ 
    while (first != nullptr)
    {
        Node *current = first;
        first = first->getNext();
        delete current;
		current = nullptr;
    }

	numOfItems = 0;
}

	//destructor
AnyList::~AnyList()
{
	destroyList();
}


