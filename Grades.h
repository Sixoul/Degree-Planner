/*******************************************************
Author name:	Louis Wagner
Date:	12/3/2016
Module name:	Grades header, Grades.cpp
Description:	Component used to create grades for a
		Pulls grades from a database, calculate
		average and sends to course object.
*******************************************************/

#ifndef GRADES_H
#define GRADES_H

#include <iostream>
using namespace std;

class Grades
{
private:
	int courseID;
	float grade, avgGrade;
	string profName;

public:
	Grades();
	Grades(int newCourse, string newProf);

	int getCourseID();
	float getGrade();
	float getAvgGrade();
	string getProfName();

	void setCourseID(int newCourse);
	void setGrade(float newGrade);
	void setProfName(string newProf);

	int digitCount(int num);
	bool hasSpecialChar(string input);
};


#endif // GRADES_H
