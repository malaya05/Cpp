//#include "CourseType.h"		
//#include "Course.h"
//
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	{
//		cout << "*********************************************************\n"
//			<< "            TESTING CourseType Class\n"
//			<< "*********************************************************\n\n";
//		CourseType csA150;
//		csA150.printCourse();
//		csA150.setCourseName("C++ Programming 1");
//		csA150.setCourseNumber(150);
//		csA150.setCourseUnits(4.0);
//		csA150.printCourse();
//
//		CourseType csA250("C++ Programming 2", 250, 4.0);
//		cout << csA250.getPrefix() << csA250.getCourseNumber()
//			<< " - " << csA250.getCourseName()
//			<< " (" << csA250.getCourseUnits() << " units)"
//			<< endl;
//	}
//
//	{
//		cout << "\n\n*********************************************************\n"
//			<< "            TESTING Course Class\n"
//			<< "*********************************************************\n\n";
//		Course csA150;
//		csA150.printCourse();
//		csA150.setCourseName("C++ Programming 1");
//		csA150.setCourseNumber(150);
//		csA150.setCourseUnits(4.0);
//		csA150.setTransfer('Y');
//		int prereqs[] = { 122, 140, 170 };
//		csA150.setPrereqs(prereqs, 3);
//		csA150.printCourse();
//		csA150.printPrereqs();
//
//		vector<int> prerequisites = { 150 };
//		Course csA250("C++ Programming 2", 250, 4.0, prerequisites, 'Y');
//		cout << csA250.getPrefix() << csA250.getCourseNumber()
//			<< " - " << csA250.getCourseName()
//			<< " (" << csA250.getCourseUnits() << " units)"
//			<< endl;
//		csA250.printPrereqs();
//		cout << endl;
//	}
//
//	cout << endl;
//	system("Pause");
//	return 0;
//
//}