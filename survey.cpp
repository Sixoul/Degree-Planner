/*******************************************************
Author name:  Miguel Sanchez
Date:  12/3/2016
Module name:  Survey Class, Survey.cpp
Rev Author: Louis Wagner
Rev Version: 2.0
*******************************************************/

#include "Survey.h"

//constructors
Survey::Survey()
{
	setCourse("Null");
	setMajor("Null");
	setHour(0);
	setRating(0);
	setWork(0);
}

Survey::Survey(string newCourse, string newMajor, int newHour, int newRating, int newWork)
{
	setCourse(newCourse);
	setMajor(newMajor);
	setHour(newHour);
	setRating(newRating);
	setWork(newWork);
}
//end of constructors

//get methods
string Survey::getCourse()
{
	return course;
}

string Survey::getMajor()
{
	return major;
}

int Survey::getHour()
{
	return hour;
}

int Survey::getRating()
{
	return rating;
}

int Survey::getWork()
{
	return work;
}
//end of get methods

//set methods
void Survey::setCourse(string newCourse)
{
	course = newCourse;
}

void Survey::setMajor(string newMajor)
{
	major = newMajor;
}

void Survey::setHour(int newHour)
{
	hour = newHour;
}

void Survey::setRating(int newRating)
{
	rating = newRating;
}

void Survey::setWork(int newWork)
{
	work = newWork;
}
//end of set methods

void Survey::toString()
{
	cout << Survey::getCourse() << '\n' << Survey::getMajor() << '\n' << Survey::getHour() << '\n'
		<< Survey::getRating() << '\n' << Survey::getWork() << '\n';
}
