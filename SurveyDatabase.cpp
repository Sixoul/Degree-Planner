/*******************************************************
Author name:  Louis Wagner
Date:  12/3/2016
Module name:	Survey Database Class, SurveyDatabase.cpp
Description:	Creates a survey object from a survey input file.
				Adds survey objects to an array that is passed to it.

				Create a SurveyDatabase object. Create an array of Survey Objects
				Call readSurvey(), passing the array of Survey Objects.
				All Survey Objects should be inside the array.
*******************************************************/

#include <fstream>
#include <string>
#include "SurveyDatabase.h"


void SurveyDatabase::readSurvey(Survey database[])
{

	fstream input("survey.txt");
	int count = 0;
	int i = 0;
	string line, courseID, majorName;
	int totalHour, profRating, courseWork;

	while (input.good())
	{
		switch (i)
		{
		case 0:
			getline(input, line);
			courseID = line;
			i++;
			break;

		case 1:
			getline(input, line);
			majorName = line;
			i++;
			break;

		case 2:
			getline(input, line);
			totalHour = atoi(line.c_str());
			i++;
			break;

		case 3:
			getline(input, line);
			profRating = atoi(line.c_str());
			i++;
			break;

		case 4:
			getline(input, line);
			courseWork = atoi(line.c_str());
			i++;
			break;

		default:
			if (line[0] != '-')
			{
				i = 0;
				Survey object(courseID, majorName, totalHour, profRating, courseWork);
				database[count] = object;
				if (count < 2)
					count++;
			}
		}
	}
	input.close();
}