#include "string" 
#include "list" 
#include "iostream" 
#include "sstream" 
#include "iterator" 
using namespace std;

struct Courses {
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
	CoursesList();
	~CoursesList();
	void AddToList();
	void ViewList();
private:
	Courses* head;
};
