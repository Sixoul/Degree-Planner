/*******************************************************
Author name:  Miguel Sanchez
Date:  12/3/2016
Module name:  Survey Header, Survey.h
Rev Author: Louis Wagner
Rev Version: 2.0
*******************************************************/
#ifndef SURVEY_H
#define SURVEY_H

#include <iostream>
#include <string>

using namespace std;

class Survey
{
private:
	string course, major;
	int hour, rating, work;

public:
	//constructors
	Survey();
	Survey(string newCourse, string newMajor, int newHour, int newRating, int newWork);

	//get methods
	string getCourse();
	string getMajor();
	int getHour();
	int getRating();
	int getWork();

	//set methods
	void setCourse(string);
	void setMajor(string);
	void setHour(int);
	void setRating(int);
	void setWork(int);

	//debug to print out string to console
	void toString();
};
#endif // SURVEY_H
