/*
	Alaya, Anas
	Verastegui, Byron
	Mendoza, Moises

	CS A250
	April 19, 2017

	Lab 10
*/

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <set>
#include <map>
using namespace std;

// Definition of function difference
int difference(const set<int>& set1)
{
	return  *(set1.rbegin()) - *(set1.begin());
}
// Definition of function multiplesOfTen
void multiplesOfTen(map<int, int>& intMap)
{
	map<int, int>::const_iterator tailIter = intMap.begin();
	map<int, int>::iterator iter = ++intMap.begin();
	map<int, int>::const_iterator end = intMap.end();
	int save = 0;
	while (iter != end)
	{
		if (tailIter->first % 10 == 0)
			save = tailIter->first;	
		if (iter->first % 10 != 0)
			iter->second = save;

		tailIter++;
		iter++;
	}
} 

// Definition of function afterFive
//void afterFive(const multiset<int>& full, multiset<int>& newSet)
//{
//	multiset<int>::iterator end = full.end();
//	auto five = full.find(5);
//	for (five; five != end; five++)
//	{
//		if(*five != 5)
//		newSet.insert(*five);
//	}
//	if (newSet.size() == 0)
//		cout << "(empty)" << endl;
//}
void afterFive(const multiset<int>& set1, multiset<int>& set2)
{
	int last5 = 0;
	set<int>::const_reverse_iterator iterSetReverse = set1.crbegin(); 
	set<int>::const_reverse_iterator iterSetReverseEnd = set1.crend();
	while (iterSetReverse != iterSetReverseEnd && *iterSetReverse != 5)
		++iterSetReverse;
	if (iterSetReverse != iterSetReverseEnd)
	{
		set<int>::const_reverse_iterator iterSet = set1.crbegin();
		for (iterSet; iterSet != iterSetReverse; ++iterSet)
			auto iter = set2.insert(*iterSet);
	}
}
#endif



//void afterFive(const multiset<int>& full, multiset<int>& newSet)
//{
//	multiset<int>::iterator iter = full.begin();
//	multiset<int>::iterator end = full.end();
//	multiset<int>::iterator hereCopy = iter;
//	while (iter != end)
//	{
//		if (*iter == 5)
//		{
//			while (*iter == 5 &&  full.upper_bound(5) != end )
//				iter++;
//			hereCopy = iter;
//			for (hereCopy; hereCopy != end; hereCopy++)
//				if (*hereCopy != 5)
//					newSet.insert(*hereCopy);
//		}
//		iter++;
//	}
//	if (newSet.empty())
//		cerr << "(empty)" << endl;
//}