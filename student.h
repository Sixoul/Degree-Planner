/*******************************************************
Kevin Enario
student.h
Student class

*******************************************************/

#ifndef student_h
#define student_h

#include <string>

using namespace std;

class student {
	private:
		//data fields
		int studentID;
		int year;
		float gpa;
		string studentName;
		string courseName;
		string grade;
		string term;
	public:
		//constructor
		student(int);
		
		//members		
		int getId(void);
		int getYear();
		float getGPA();
		string getName();
		string getTerm();
		string getCourseName();
		string getGrade();
		void setInfo();
		void showInfo();
		void saveInfo();
};

#endif

	
	
