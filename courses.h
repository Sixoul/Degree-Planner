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
	//void MovetoEnd();
	//int TotalCourses();
private:
	Courses* head;
	//int TotalCourses(Courses*);
	/*void InsertBeginning(Employee*, Employee*); this is the only thing i added to the header file because
	i figure it would make it easier to input the current node to the top of the previous node*/
	// add any other private member functions you wish - not required
};