/*
     Alaya, Anas
	 Verastegui, Byron
	 Mendoza, Moises

	 CS A250
	 February 28, 2017

	 Project 1
*/

#ifndef CourseType_H
#define CourseType_H

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

// Global veriable for prefixes
const string PREFIX = "CS A";

class CourseType
{
public:
	CourseType();
	CourseType(const string &newName, int newCourseNumber, double newCourseUnite);

	// Accessors
	string getCourseName()const;
	int getCourseNumber() const;
	double getCourseUnits() const;
	string getPrefix()const;

	// Mutators
	void setCourseName(const string &theName);
	void setCourseNumber(const int cNumber);
	void setCourseUnits(const double cUnits);

	void printCourse()const;

	~CourseType();

private:
	string courseName;
	int courseNumber;
	double courseUnits;
};
#endif