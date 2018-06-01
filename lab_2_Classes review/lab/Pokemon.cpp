#include "Pokemon.h"

Pokemon::Pokemon() :num(0) {}

Pokemon::Pokemon(const string& newName, int newNum, const string& newType1)
	: name(newName), num(newNum), kind(newType1) {}

Pokemon::Pokemon(const string& otherName, int otherNum, const string& otherType1, const string& otherType2)
{
	name = otherName;
	num = otherNum;
	kind = otherType1 ;
	kind2 = otherType2;
}

string Pokemon::getType1()const
{
	return kind;
}

string Pokemon::getType2()const
{
	return kind2;
}

bool Pokemon::commonType(const Pokemon& pokemonObj)const
{
	return( (kind == pokemonObj.kind || kind == pokemonObj.kind2) ||
		  (kind2 == pokemonObj.kind || kind2 == pokemonObj.kind2 && kind2 !=""));
}

void Pokemon::print()const
{
	cout << name << ": " << kind << " " << kind2;
}

Pokemon::~Pokemon()
{}