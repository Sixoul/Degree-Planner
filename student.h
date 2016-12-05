/*******************************************************
Author name:  Kevin Enario
Date:  12/3/2016
Module name:  Student Header, student.h
*******************************************************/

#ifndef student_h
#define student_h

#include <string>
#include <vector>

using namespace std;

class student {
	private:
		//private data fields
		string studentID;
		string studentName;
		string gpa;		
		string year;
	public:
		//constructor
		student(string);
		
		/*public vectors for easier access in getting
		  the information stored.*/
		vector<string> courseName;
		vector<string> grade;
		vector<string> term;
		
		//members		
		void setName(string);
		void setGPA(string);
		void setYear(string);
		void setCourse(string);
		void setGrade(string);
		void setTerm(string);
		string getId();
		string getGPA();
		string getName();
		void setInfo();
		void showInfo();
		void saveInfo();
};

#endif

	
	
	
