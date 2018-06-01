#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>
#include <string>

using namespace std;

class Movie
{
	//overloaded insertion
	friend ostream& operator<<(ostream& out, const Movie&);

public:
	// Constructors
	Movie();
	Movie(const string& name, int theYear);

	// Accessor functions
	string getTitle() const;
	int getYear()const;

	// Mutator functions
	void setTitle(const string& name);
	void setYear(int theYear);

	// Overloaded comparison 
	bool operator==(const Movie&) const;

	//Destructor
	~Movie();

private:
	string title;
	int year;
};
#endif