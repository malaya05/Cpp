/*
	Alaya, Anas

	CS A250
	February 09, 2017

	Lab 2
*/

#ifndef Pokemon_H
#define Pokemon_H

#include <iostream>
#include <string>
using namespace std;

class Pokemon
{
public:
	Pokemon();
	Pokemon(const string& newName, int newNum, const string& newType1);
	Pokemon(const string& otherName, int otherNum, const string& otherType1, const string& otherType2);

	string getType1()const;
	string getType2()const;

	bool commonType(const Pokemon& pokemonObj)const;

	void print() const;

	~Pokemon();

private:
	string name;
	int num;
	string kind;
	string kind2;
};

#endif


