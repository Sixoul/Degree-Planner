/*************************************************
Kevin Enario
student.cpp
student class
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
void student::setYear(int y){
	year = y;
}

//sets the students gpa
void student::setGPA(float g){
	gpa = g;
}

//sets the students name
void student::setName(string name){
	studentName = name;
}

//sets the students term
void student::setTerm(string t){
	term = t;
}

//sets the name of the course
void student::setCourseName(string course){
	courseName = course;
}

//sets the students grade
void student::setGrade(string g){
	grade = g;	
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