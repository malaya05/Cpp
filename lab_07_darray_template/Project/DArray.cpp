#include "DArray.h"
template<typename T>
ostream& operator<<(ostream& out, const DArray<T>& arr)
{
	//Assume array is non-empty.

	for (int i = 0; i < arr.numOfElem; ++i)
		out << arr.a[i] << " ";

	return out;
}

template<typename T>
DArray<T>::DArray( )
{
    capacity = 50;
	a = new T[capacity];	
	numOfElem = 0;
}

template<typename T>
DArray<T>::DArray(int newCapacity) 
{
	capacity = newCapacity;
    a = new T[capacity];
	numOfElem = 0;	 
}

template<typename T>
DArray<T>::DArray(const DArray<T>& otherArray)
{
	capacity = otherArray.capacity;	
	a = new T[capacity];
	numOfElem = otherArray.numOfElem;

	for (int i = 0; i < numOfElem; ++i)
		a[i] = otherArray.a[i];
}

template<typename T>
void DArray<T>::addElement(const T& element) 
{
	a[numOfElem] = element;
    ++numOfElem;
}

template<typename T>
int DArray<T>::getCapacity() const
{
	return capacity;
}

template<typename T>
int DArray<T>::getNumOfElem() const
{
	return numOfElem;
}

template<typename T>
T& DArray<T>::operator[](int idx) const
{
	return a[idx];
}

template<typename T>
DArray<T>& DArray<T>::operator=(const DArray<T>& otherArray)
{
	if (&otherArray != this)
	{
		if (capacity != otherArray.capacity)
		{
			delete[] a; //release space
			a = new T[otherArray.capacity];
			capacity = otherArray.capacity;
		}
		for (int i = 0; i < otherArray.numOfElem; ++i)
			a[i] = otherArray.a[i];
		numOfElem = otherArray.numOfElem;
	}
	else
		cerr << "Attempted assignment to itself.";

	return *this;
}

template<typename T>
DArray<T>::~DArray( )
{
    delete [] a;
	a = NULL;	
}

//*******************************************************************

// Definition function deleteElement
template<typename T>
void DArray<T>::deleteElement(const T& num)
{
	for (int i = 0; i < numOfElem; i++)
	{
		if (a[i] == num)
		{
			for (int j = i; j < numOfElem-1; j++)
				a[j] = a[j + 1];
			numOfElem--;	
		}
	}
}

// Definition function deleteAtIdx
template<typename T>
void DArray<T>::deleteAtIdx(int index)
{
	for (int i = index; i < numOfElem; i++)
		a[i] = a[i + 1];
	numOfElem--;
}

// Definition function search
template<typename T>
bool DArray<T>::search(const T& Tofind) const
{
	for (int i = 0; i < numOfElem; i++)
	{
		if (a[i] == Tofind)
			return true;
	}
	return false;
}

// Definition function emptyArray
template<typename T>
void DArray<T>::emptyArray()
{
	numOfElem = 0;
}

// Definition function isEmpty
template<typename T>
bool DArray<T>::isEmpty() const
{
	return (numOfElem == 0);
}

// Definition function isFull
template<typename T>
bool DArray<T>::isFull() const
{
	return (numOfElem == capacity);
}