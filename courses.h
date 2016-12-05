#include "string" 
#include "list" 
#include "iostream" 
#include "sstream" 
#include "iterator" 
using namespace std;

struct Courses {
	//objects to hold information and pass it to a linkedlist
	string className;
	string classID;
	string units;
	string classRoom;
	string days;
	string time;
	string professor;
	Courses* link;
};

class CoursesList {
public:
	CoursesList();//constructor
	~CoursesList();//deconstructor
	void AddToList();//to add the courses to a linkedlist to view
	void ViewList();//it reads the linkedlist and outputs the data to see the courses offered
private:
	Courses* head;//the head of the linkedlist
};
