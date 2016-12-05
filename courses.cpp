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
	//local variables
	string addClassName;
	string addClassID;
	string addUnits;
	string addClassRoom;
	string addDays;
	string addTime;
	string addProfessor;


	ifstream inputFile;
	inputFile.open("courses.txt");//open file to rea

	while (!inputFile.eof()) //read file until it reaches the end of the file
	{
		//reads file and assigns the line of file to the variable (right in the parentheses)
		getline(inputFile, addClassName);
		getline(inputFile, addClassID);
		getline(inputFile, addUnits);
		getline(inputFile, addClassRoom);
		getline(inputFile, addDays);
		getline(inputFile, addTime);
		getline(inputFile, addProfessor);
		
		//variable points to and assigns it to the object, and creates a new instance to then add to a linkedlist
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

		if (head == NULL)// if the linkedlist is empty then insert node to the top of the linkedlist
			head = cors;
		else
		{
			//if the linkedlist is not empty then insert node and move pointer to new node
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

	if (head == NULL)// if the linkedlist is empty then return nothing
		return;
	else
	{
		//go throught linkedlist and display everything that is in the linked list
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
