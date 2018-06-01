#include "Course.h"

Course::Course()
	: CourseType(), state('N')
{}

Course::Course(const string &childName, int childNumber, double childUnits, const vector<int> &childVec, char childState)
	: CourseType(childName, childNumber, childUnits)
{
	prerequisites = childVec;
	state = childState;
}

bool Course::isTransferable() const
{
	return state == 'Y';
}

void Course::setTransfer(char trans)
{
	state = trans;
}

void Course::setPrereqs(const int array[], int numOfElem)
{
	for (int i = 0; i < numOfElem; i++)
		prerequisites.push_back(array[i]);
}

void Course::printCourse() const
{
	cout << fixed << showpoint << setprecision(2);
	if (state == 'Y')
	{
		cout << getPrefix() << getCourseNumber() << " - " << getCourseName() << " " 
			<< "(" << getCourseUnits() << " units, transferable)" << endl;
	}
	else
	{
		cout << getPrefix() << getCourseNumber() << " - " << getCourseName() << " "
			<< "(" << getCourseUnits() << " units, not transferable)" << endl;
	}
}

void Course::printPrereqs() const
{
	if (static_cast<int>(prerequisites.size()) > 0) // Added if and else for case 5 in interface.cpp
	{
		cout << getPrefix() << getCourseNumber() << " - Prerequisites: ";

		int size = static_cast<int> (prerequisites.size());
		for (int current = 0; current < size - 1; ++current)
			cout << getPrefix() << prerequisites[current] << " or ";

		cout << getPrefix() << prerequisites[size - 1] << endl;
	}
	else
		cout << getPrefix() << getCourseNumber() << " - Prerequisites: None" << endl;
}

Course::~Course()
{}