 survey.h

#include <iostream>
#include <string>

using namespace std;

class survey		
{
private:
	string Cname, major;
	int Trating, difficulty;

public:
	survey();	
	void getvalues(string, string, int, int);
	void display();
};
//end of survey.h