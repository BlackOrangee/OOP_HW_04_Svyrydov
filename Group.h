#pragma once
#include <iostream>
#include <vector>
#include "Student.h"
using namespace std;

class Group
{
private:
	// Name of the Group
	string name = "";

	// Vector to store students
	vector <Student> students;

public:
	// Set the name of the group
	void SetGroupName(string);

	// Add a student to the group's list of students
	void SetStudent(Student);

	// Print the details of the group and its students
	void PrintGroup();
};

