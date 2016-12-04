/*************************************************
Kevin Enario
student.cpp

Student class
The purpose of the student class is to store information
regarding the student from a database containing the
students information.

12/3/2016
*************************************************/

#include "student.h"
#include <iostream>

//constructor for the student class
//takes student id number as the argument
student::student(int idNumber){
	studentID = idNumber;
}

//returns the student id number
int student::getId(){
	return studentID;
}

//sets the students year
int student::getYear(){
	return year;
}

//sets the students gpa
float student::getGPA(){
	return gpa;
}

//sets the students name
string student::getName(){
	return studentName;
}

//sets the students term
string student::getTerm(){
	return term;
}

//sets the name of the course
string student::getCourseName(){
	return courseName;
}

//sets the students grade
string student::getGrade(){
	return grade;
}

//shows all student information
void student::showInfo(){
	cout << endl;
	cout << "Student information" << endl;
	cout << "-------------------" << endl;
	cout << "Student ID: " << studentID << endl;
	cout << "Name: " << studentName << endl;
	cout << "Term: " << term << endl;
	cout << "Course: " << courseName << endl;
	cout << "Grade: " << grade << endl;
	cout << "GPA: " << gpa << endl;
	cout << "Year: " << year << endl << endl;
}

//function that takes the information from "database"
void student::setInfo(){
	
}

//saves information to the student hash table
void student::saveInfo(){
	
}
