#include "TestingCases.h"

void getData(string& newName, int& newNumber, double& newUnits,
	vector<int>& newPrereqs, char& transfers, int idx)
{
	string names[] = { "Programming Concepts and Methodology I",
		"Python Programming I",
		"Programming Concepts and Methodology II",
		"C#.NET Programming",
		"Introduction to Visual Basic",
		"C++ Programming I",
		"Java Programming I",
		"Data Structures",
		"Computer Architecture",
		"Software Engineering",
		"Computer Organization and Assembly Language",
		"C++ Programming II",
		"Boolean Algebra & Logic",
		"Discrete Structures",
		"Java Programming II",
		"Mobile Application Development",
	};

	int numbers[] = { 122, 131, 132, 140,
		142, 150, 170, 200,
		216, 220, 242, 250,
		257, 262, 272, 273 };

	int units[] = { 3, 4, 4, 4,
		4, 4, 4, 4,
		4, 4, 3, 4,
		3, 3, 4, 4 };

	vector<vector<int>> prereqs = { {},
	{},
	{},
	{},
	{},
	{ 131, 140, 142, 170 },
	{},
	{ 250 },
	{ 150, 170 },
	{ 150 },
	{ 122, 131, 140, 150 },
	{ 150 },
	{ 122, 131, 140, 150 },
	{ 122, 131, 140, 150 },
	{ 170 },
	{ 250, 272 },
	{}
	};

	char transfer[] = { 'Y', 'Y', 'Y', 'Y',
		'Y', 'Y', 'Y', 'Y',
		'Y', 'Y', 'Y', 'Y',
		'Y', 'Y', 'Y', 'N' };

	newName = names[idx];
	newNumber = numbers[idx];
	newUnits = units[idx];
	newPrereqs = prereqs[idx];
	transfers = transfer[idx];
}