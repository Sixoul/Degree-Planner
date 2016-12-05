
/***********************************************************************
Author name:  Kevin Enario
Date:  12/3/2016
Module name:  Student Class, student.cpp
Description:  The purpose of the student class is to store information
			  regarding the student from a database containing the
			  students information.
***********************************************************************/

#include "student.h"
#include <iostream>

//constructor for the student class
//takes student id number as the argument
student::student(string idNumber){
	studentID = idNumber;
}

//setters
void student::setName(string name){
	studentName = name;
}

void student::setGPA(string g){
	gpa = g;
}

void student::setYear(string y){
	year = y;
}

void student::setCourse(string course){
	courseName.push_back(course);
}

void student::setGrade(string gr){
	grade.push_back(gr);
}

void student::setTerm(string t){
	term.push_back(t);
}

//getters
string student::getId(){
	return studentID;
}

string student::getGPA(){
	return gpa;
}

string student::getName(){
	return studentName;
}

//shows all student information
void student::showInfo(){
	cout << endl;
	cout << "Student information" << endl;
	cout << "-------------------" << endl;
	cout << "Student ID: " << studentID << endl;
	cout << "Name: " << studentName << endl;	
	cout << "GPA: " << gpa << endl;
	cout << "Year: " << year << endl;
	//the vector data fields use for loops to iterate and display
	for (int x = 0; x < courseName.size(); x++){
		cout << "Course: " << courseName[x] << "  Term: " <<
			term[x] << "  Grade: " << grade[x] << endl;
	}	
}

//function that takes the information from "database"
void student::setInfo(){
	
}

//saves information to the student hash table
void student::saveInfo(){
	
}

