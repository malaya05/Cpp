/*
	Verastegui, Byron
	Mendoza, Moises
	Alaya, Anas

	CS A250
	April 13, 2017

	Project 1 Part C
*/

#include "CourseType.h"		
#include "Course.h"
#include "CourseList.h"
#include "Testing.h"
#include "TestingCases.h"
#include "Interface.h"

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	/********************************************************
	*	TESTING database
	********************************************************/
	CourseList courseList;
	createCourseList(courseList);
	displayMenu();
	processChoice(courseList);

	cout << endl;
	system("Pause");
	return 0;

}