#ifndef PAIR_H
#define PAIR_H

#include <iostream>
using namespace std;

template<typename T>
class Pair
{
	// NOTE: The friend function declaration needs to be set as a template
	//       because it is not a member of the class Pair.
	template<typename T>	
	friend ostream& operator<<(ostream& out, const Pair<T>& p);

public:
    Pair( );
	Pair(const T& firstValue, const T& secondValue);

    void setFirst(const T&);
    void setSecond(const T&);

    T getFirst( ) const;
    T getSecond( ) const;

	Pair<T> operator+(const Pair<T>& otherPair) const;

	~Pair();

private:
    T first;
    T second;
};

#endif 