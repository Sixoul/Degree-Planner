#include "string" 
#include "list" 
#include "iostream" 
#include "sstream" 
#include "iterator" 
using namespace std;

struct Courses {
	string className;
	int classID;
	string classRoom;
	int units;
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
