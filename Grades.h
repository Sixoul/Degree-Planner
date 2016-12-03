#pragma once

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