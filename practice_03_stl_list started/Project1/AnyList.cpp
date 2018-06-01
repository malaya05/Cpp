#include "AnyList.h"

// Definition overloaded insertion operator
ostream& operator<<(ostream& out, const AnyList& otherList)
{
	for (int i : *otherList.ptr)
	{
		out << i << " ";
	}
	out << endl;
	return out;
}

// Definition default constructor
AnyList::AnyList()
{
	ptr = new list<int>;
}

// Definition function insertFront
void AnyList::insertFront(int num) const
{
	ptr->push_front(num);
}

// Definition function insertBack
void AnyList::insertBack(int num) const
{
	ptr->push_back(num);
}

// Definition function getNumOfElem
int AnyList::getNumOfElem() const
{
	return static_cast<int>(ptr->size());
}

// Definition function removeItem
void AnyList::removeItem(int num) const
{
	ptr->remove(num);
}

// Definition function mergeLists
void AnyList::mergeLists(const AnyList& otherList) const
{
	ptr->sort();
	otherList.ptr->sort();
	ptr->merge(*otherList.ptr);
}

// Definition function replaceItem
void AnyList::replaceItem(int oldItem, int newItem) const
{
	replace(ptr->begin(), ptr->end(), oldItem, newItem);
}

// Definition function search
bool AnyList::search(int num) const
{
	return (find(ptr->begin(), ptr->end(), num) != ptr->end());
}

// Definition function reversePrint
void AnyList::reversePrint() const
{
	if (ptr->empty())
	{
		cerr << "List is empty." << endl;
	}
	else
	{
		list<int>::const_reverse_iterator revIter = ptr->crbegin();
		list<int>::const_reverse_iterator revIterEnd = ptr->crend();
		for (revIter; revIter != revIterEnd; ++revIter)
		{
			cout << *revIter << " ";
		}

		// or

		auto iter = ptr->rbegin();
		auto iterEnd = ptr->rend();
		while (iter != iterEnd)
		{
			cout << *iter << " ";
			++iter;
		}
	}
}

// Definition function emptyList
void AnyList::emptyList() const
{
	ptr->clear();
}

// Definition copy constructor
AnyList::AnyList(const AnyList& otherList)
{
	ptr = new list<int>;
	list<int>::iterator iterStart = otherList.ptr->begin();
	list<int>::iterator iterEnd = otherList.ptr->end();
	ptr->assign(iterStart, iterEnd);

	// OR 
	for (iterStart; iterStart != iterEnd; iterStart++)
	{
		this->insertFront(*iterStart);
	}
}

// Definition overaloaded assignment operator 
AnyList& AnyList::operator=(const AnyList& otherList)
{
	if (this != &otherList)
	{
		if (otherList.getNumOfElem() != ptr->size())
		{
			delete ptr;
			ptr = new list<int>;
		}
		else
		{
			/*
			need a loop to start coping 
			or use one of the lists functions 
			
			*/
			list<int>::iterator iterB = otherList.ptr->begin();
			list<int>::iterator iterEnd = otherList.ptr->end();
			ptr->assign(iterB, iterEnd);

			// or 
			for (iterB; iterB != iterEnd; iterB++)
			{
				this->insertFront(*iterB);
			}
		}
	}
	else
		cerr << "Self assigment" << endl;
	return *this;
}

// Definition destructor
AnyList::~AnyList()
{
	delete ptr;
	ptr = nullptr;
}


