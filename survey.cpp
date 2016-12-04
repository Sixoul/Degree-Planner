survey.cpp

#include "survey.h"

survey::survey()
{
	Cname = "Null";
	major = "Null";
	Trating = 0;
	difficulty = 0;
}

void survey::getvalues(string name, string m, int r, int d)
{
	Cname = name;
	major = m;
	Trating = r;
	difficulty = d;
}

void survey::display()
{
	cout << "\nCourse name: ";
	cout << Cname;
	cout << "\nStudents major: ";
	cout << major;
	cout << "\nProfessor rating, 0-5, '0' being the lowest: ";
	cout << Trating;
	cout << "\nClass rating, 0-5, '0' being the lowest: ";
	cout << difficulty;
}
//end of survey.cpp