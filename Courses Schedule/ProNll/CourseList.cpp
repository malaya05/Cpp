#include "CourseList.h"

// Default constructor
CourseList::CourseList()
{
	first = nullptr;
	last = nullptr;
	count = 0;
}
// Definition function addCourse
void CourseList::addCourse(const string& name, int number, double units,
	const vector<int>& preq, char trans)
{
	Course theCourse(name, number, units, preq, trans);
	Node* temp = new Node(theCourse, nullptr);
	if (first == nullptr)
		first = last = temp;
	else
	{
		last->setNext(temp);
		last = temp;
	}
	count++;
}
// Definition function isEmpty
bool CourseList::isEmpty() const
{
	return (first == nullptr);
}
// Definition function searchCourse
bool CourseList::searchCourse(int courseNum) const
{
	Node* temp = first;
	while (temp != nullptr)
	{
		if (temp->getCourse().getCourseNumber() == courseNum)
			return true;
		temp = temp->getNext();
	}
	return false;
}
// Definition function printAllCourses
void CourseList::printAllCourses() const
{
	Node* temp = first;
	while (temp != nullptr)
	{
		cout << temp->getCourse().getPrefix() <<
			temp->getCourse().getCourseNumber() << " - "
			<< temp->getCourse().getCourseName() << endl; //CS A250 - C++ Programming II 
		temp = temp->getNext();
	}
}
// Definition function printPrereqs
void CourseList::printPrereqs(int num) const
{
	Node* curr = this->getCourseLocation(num);
	curr->getCourse().printPrereqs();
}

// Definition function printTransferCourses
void CourseList::printTransferCourses() const
{
	Node* temp = first;
	while (temp != nullptr)
	{
		if (temp->getCourse().isTransferable())
		{
			cout << temp->getCourse().getPrefix() <<
				temp->getCourse().getCourseNumber() << " - "
				<< temp->getCourse().getCourseName() << endl; //CS A250 - C++ Programming II 
		}
		temp = temp->getNext();
	}
}

// Definition function printVocationalCourses
void CourseList::printVocationalCourses() const
{
	Node* temp = first;
	while (temp != nullptr)
	{
		if (!(temp->getCourse().isTransferable()))
		{
			cout << temp->getCourse().getPrefix() <<
				temp->getCourse().getCourseNumber() << " - "
				<< temp->getCourse().getCourseName() << endl;
		}
		temp = temp->getNext();
	}
}
// Definition function printCourseByNumber
void CourseList::printCourseByNumber(int num) const
{
	Node* temp = this->getCourseLocation(num);
	temp->getCourse().printCourse();
}
// Definition function clearList
void CourseList::clearList()
{
	while (first != nullptr)
	{
		Node* temp = first;
		first = first->getNext();
		delete temp;
		temp = nullptr;
	}
	last = nullptr;
	count = 0;
}
// Definition destructor
CourseList::~CourseList()
{
	this->clearList();
}
// Definition function getCourseLocation
Node* CourseList::getCourseLocation(int num) const
{
	Node* temp = first,
		* result = nullptr;

	while (temp != nullptr)
	{
		if (temp->getCourse().getCourseNumber() == num)
			result = temp;
		temp = temp->getNext();
	}
	return result;
}