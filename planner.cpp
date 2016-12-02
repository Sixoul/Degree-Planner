#include "planner.h"

planner::Planner()
{
    RequirementCount = 0;
}

Planner::Planner(char name[])
{
    RequirementCount = 0;

    for (int i = 0; i < NAMELENGTH; i++ )
    {
        Name[i]  = name[i];
    }
}


bool Planner::AddRequirement(Course course)
{
    if (RequirementCount < MAXCOURSES)
    {
        RequiredCourses[RequirementCount] = course;
        RequirementCount++;
         return true;
    }
    return false;
}


int Planner::GetRequirementCount()
{
    return RequirementCount;
}