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

	string addClassName;
	string addClassID;
	string addUnits;
	string addClassRoom;
	string addDays;
	string addTime;
	string addProfessor;


	ifstream inputFile;
	inputFile.open("courses.txt");

	while (!inputFile.eof()) //if file not end of file
	{
		getline(inputFile, addClassName);
		getline(inputFile, addClassID);
		getline(inputFile, addUnits);
		getline(inputFile, addClassRoom);
		getline(inputFile, addDays);
		getline(inputFile, addTime);
		getline(inputFile, addProfessor);
		

		Courses *cors = new Courses;
		cors->className = addClassName;
		cors->classID = addClassID;
		cors->units = addUnits;
		cors->classRoom = addClassRoom;
		cors->days = addDays;
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
			cout << "Units: " << ptr->units << endl;
			cout << "Class Room: " << ptr->classRoom << endl;
			cout << "Days: " << ptr->days << endl;
			cout << "Time: " << ptr->time << endl;
			cout << "Professor: " << ptr->professor << endl;
			ptr = ptr->link;
		}
	}

}
