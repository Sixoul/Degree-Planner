/*******************************************************
Kevin Enario
student.h
student class
*******************************************************/

#ifndef student_h
#define student_h

#include <string>

using namespace std;

class student {
	public:
		//data fields
		int studentID;
		int year;
		float gpa;
		string studentName;
		string courseName;
		string grade;
		string term;
		
		//constructor
		student(int);
		
		//members		
		int getId(void);
		void setYear(int);
		void setGPA(float);
		void setName(string);
		void setTerm(string);
		void setCourseName(string);
		void setGrade(string);
		void setInfo(void);
		void showInfo(void);
		void saveInfo(void);
};

#endif

	