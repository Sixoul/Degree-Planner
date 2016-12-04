#include<fstream>
#include "string" 
#include "list" 
#include "iostream" 
#include "sstream" 
#include "iterator" 
#include "courses.h"
using namespace std;

CoursesList::CoursesList()
{
	head = NULL;
}
CoursesList::~CoursesList()
{
	Courses *ptr = head;
	while (ptr != NULL)
	{
		Courses *erase = ptr;
		ptr = ptr->link;
		delete erase;
	}

}

void CoursesList::AddToList()
{
	ifstream input("courses.txt");
	
	string addClassName;
	int addClassID;
	string addClassRoom;
	int addUnits;
	string addTime;
	string addProfessor;
	
	//=====================================================
	if (input.fail()) //if file did not exist
	{
		cout << "fail" << endl;
		return;
	}
	else
	{
		cout << "SUCCESS" << endl;
		while (!input.eof()) //if file not end of file
		{
			//read data from txt file named list
			getline(input, addClassName);
			input >> addClassID;
			input >> addUnits;
			getline(input, addClassRoom);
			getline(input, addDays);
			getline(input, addDays);
			getline(input, addProfessor);
		}
	}
	
	//optional if not reading from a database or file
	/*cout << "Class Name: ";
	cin >> addClassName;
	cout << "Enter ClassID: ";
	cin >> addClassID;
	cout << "Enter Class Room:";
	cin >> addClassRoom;
	cout << "Enter how many units:";
	cin >> addUnits;
	cout << "Add Time: ";
	cin >> addTime;
	cout << "Name of professor:";
	cin >> addProfessor;*/

	Courses *cors = new Courses;
	cors->className = addClassName;
	cors->classID = addClassID;
	cors->classRoom = addClassRoom;
	cors->units = addUnits;
	cors->time = addTime;
	cors->professor = addProfessor;
	cors->link = NULL;

	Courses *Currtptr = NULL;
	Courses *PrevPtr = NULL;

	if (head == NULL)
		head = cors;
	else
	{
		Currtptr = head;
		while (Currtptr != NULL)
		{
			PrevPtr = Currtptr;
			Currtptr = Currtptr->link;
		}
		if (Currtptr == NULL)
			PrevPtr->link = cors;
	}
}


void CoursesList::ViewList()
{
	Courses *ptr = NULL;

	if (head == NULL)
		return;
	else
	{
		ptr = head;
		while (ptr != NULL)
		{
			cout << "Class Name: " << ptr->className << endl;
			cout << "Class ID: " << ptr->classID << endl;
			cout << "Class Room: " << ptr->classRoom << endl;
			cout << "Units: " << ptr->units << endl;
			cout << "Time: " << ptr->time << endl;
			cout << "Professor: " << ptr->professor << endl;
			ptr = ptr->link;
		}
	}

}
