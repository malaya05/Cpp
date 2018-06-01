/*
	Alaya, Anas
	Verastegui, Byron
	Mendoza, Moises

	CS A250
	February 28, 2017

	Project 1
*/

#ifndef Course_H
#define Course_H 

#include "CourseType.h"
#include <vector>

class Course : public CourseType
{
public:
	Course();
	Course(const string &childName, int childNumber, double childUnits, const vector<int> &childVec, char childState);

	bool isTransferable() const;

	// Mutators
	void setTransfer(char trans);
	void setPrereqs(const int array[], int numOfElem);

	// print functions
	void printCourse() const;
	void printPrereqs() const;

	~Course();

private:
	vector<int> prerequisites;
	char state;
};
#endif