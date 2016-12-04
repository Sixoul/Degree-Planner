#include "Grades.h"

//returns the amount of digits in a number
int Grades::digitCount(int num)
{
	int digits = 0;
	if (num < 0) { digits = 1; }
	while (num)
	{
		num = num / 10;
		digits++;
	}
	return digits;
}

//Checks for any character that isn't alphabetic, a space, or -.
bool Grades::hasSpecialChar(string input)
{
	bool isTrue = false;
	int i = 0;
	while (input[i])
	{
		if (isalpha(input[i]) || input[i] == ' ' || input[i] == '-')
		{
			printf("character %c is alphabetic\n", input[i]);
		}
		else
		{
			printf("character %c is not alphabetic\n", input[i]);
			isTrue = true;
		}
		i++;
	}
	return isTrue;

}

//Constructors
Grades::Grades()
{
	setCourseID(00000);
	setProfName("Error");
}

Grades::Grades(int newCourse, string newProf)
{
	setCourseID(newCourse);
	setProfName(newProf);
}

//Sets
void Grades::setCourseID(int newCourse)
{
	if (digitCount(newCourse) == 5)
	{
		courseID = newCourse;
	}
}

void Grades::setGrade(float newGrade)
{
	if (newGrade >= 0)
	{
		grade = newGrade;
	}
}
void Grades::setProfName(string newProf)
{
	if (hasSpecialChar(newProf))
	{
		printf("Error");
	}
	else
	{
		profName = newProf;
	}
}

/Gets
int Grades::getCourseID()
{
	return courseID;
}

float Grades::getGrade()
{
	return grade;
}

float Grades::getAvgGrade()
{
	return avgGrade;
}

std::string Grades::getProfName()
{
	return profName;
}
