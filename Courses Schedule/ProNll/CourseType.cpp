#include "CourseType.h"

CourseType::CourseType()
	: courseName("No name assigned"), courseNumber(0), courseUnits(0.0)
{}

CourseType::CourseType(const string &newName, int newCourseNumber, double newCourseUnite)
: courseName(newName), courseNumber(newCourseNumber) , courseUnits(newCourseUnite)
{}

string CourseType::getCourseName() const
{
	return courseName;
}

int CourseType::getCourseNumber() const
{
	return courseNumber;
}

double CourseType::getCourseUnits() const
{
	return courseUnits;
}

string CourseType::getPrefix() const
{
	return PREFIX;
}

void CourseType::setCourseName(const string &theName)
{
	courseName = theName;
}

void CourseType::setCourseNumber(const int cNumber)
{
	courseNumber = cNumber;
}
void CourseType::setCourseUnits(const double cUnits)
{
	courseUnits = cUnits;
}

void CourseType::printCourse() const
{
	cout << fixed << showpoint << setprecision(2) ;
	cout << PREFIX << courseNumber << " - " << courseName << " " << "(" << courseUnits << " units)" << endl;
}

CourseType::~CourseType()
{}