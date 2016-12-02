#ifndef PLANNER_H
#define PLANNER_H

#include "course.h"
#include "semester.h"

class Planner
{
private:
    static const int NAMELENGTH = 50;
    static const int MAXCOURSES = 20;
    static const int MAXSEMESTERS = 20;


public:
    Planner();
    Planner(char[NAMELENGTH]);
    Course RequiredCourses[MAXCOURSES];
    Semester Semesters[MAXSEMESTERS];
    char Name[NAMELENGTH];
    bool AddRequirement(Course course);
    int GetRequirementCount();
    int RequirementCount;
};

#endif // PLANNER_H