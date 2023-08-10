#include "Group.h"

void Group::SetGroupName(string name)
{
	this->name = name;
}

void Group::SetStudent(Student student)
{
	students.push_back(student);
}

void Group::PrintGroup()
{
	cout << "\n\tGroup " << name; // Print the name of the group

	// Iterate through the students in the group and print their details using the PrintStudent function
	for (auto student : students)
	{
		student.PrintStudent();
	}

	cout << "\n\n\n"; // Add extra lines for better formatting
}
