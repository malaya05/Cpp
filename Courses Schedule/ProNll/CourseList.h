/*
	Alaya, Anas
	Verastegui, Byron
	Mendoza, Moises

	CS A250
	March 28, 2017

	Project 1(B)
*/

#ifndef COURSELIST_H
#define COURSELIST_H

#include "Course.h"

class Node
{
public:
	Node() : course(), next(nullptr) {}
	Node(const Course& newCourse, Node *newNext)
		: course(newCourse), next(newNext) {}
	Course getCourse() const { return course; }
	Node* getNext() const { return next; }
	void setCourse(const Course& newCourse) { course = newCourse; }
	void setNext(Node *newNext) { next = newNext; }
private:
	Course course;
	Node *next;
};

class CourseList
{
public:

	// Default constructor
	CourseList();

	// Declaration function addCourse
	void addCourse(const string& name, int number, double units,
		const vector<int>& preq, char trans);

	// Declaration function isEmpty
	bool isEmpty() const;

	// Declaration function searchCourse
	bool searchCourse(int courseNum) const;

	// Declaration function printAllCourses
	void printAllCourses() const;

	// Declaration function printPrereqs
	void printPrereqs(int num) const;

	// Declaration function printTransferCourses
	void printTransferCourses() const;

	// Declaration function printVocationalCourses
	void printVocationalCourses() const;
	// Declaration function printCourseByNumber
	void printCourseByNumber(int) const;

	// Declaration function clearList
	void clearList();

	// Declaration destructor
	~CourseList();

private:
	Node *first;
	Node *last;
	int count;

	// Declaration function getCourseLocation
	Node* getCourseLocation(int) const;
};
#endif