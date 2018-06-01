#include "Movie.h"

ostream& operator<<(ostream& out, const Movie& film)
{
	//"TitleOfMovie" (year)
	out << "\"" << film.title << "\" (" << film.year <<")" << endl;
		return out;
}

Movie::Movie() : year(0) 
{}

Movie::Movie(const string& name, int theYear) :
	title(name), year(theYear) 
{}

string Movie::getTitle() const
	{
	return title;
	}

int Movie::getYear()const
	{
		return year;
	}

void Movie::setTitle(const string& name)
	{
		title = name;
	}

void Movie::setYear(int theYear)
	{
		year = theYear;
	}

bool Movie::operator==(const Movie& m1) const
	{
	return year == m1.year;
	}

	Movie::~Movie()
	{}