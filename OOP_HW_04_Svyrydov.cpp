#include <iostream>
#include <fstream>
#include <string>
#include "Group.h"
using namespace std;

void Parcer(int* marks_arr, string marks)
{
	int j = 0; // Index for the output array 'marks_arr'

	for (int i = 0; i < marks.length(); i++)
	{
		if (marks[i] != ' ')
		{
			// Convert the character to an integer and store it in the output array
			marks_arr[j] = marks[i] - 48; // ASCII '0' is 48
			j++; // Increment the index for the output array
		}
	}
}

void ReadPredmets(Student& student, string marks)
{
	ifstream in; // Input file stream

	// Open the file "Predmets.list" for reading
	in.open("Predmets.list");

	if (!in.is_open())
	{
		cout << "\n\n\tRead error\n\n\n";
		return;
	}

	string predmetname; // Variable to store the name of a subject
	int* marks_arr = new int[3]; // Array to store parsed marks

	Parcer(marks_arr, marks); // Parse the marks string

	int i = 0; // Index for iterating through marks_arr

	// Read each line (subject name) from the file
	while (getline(in, predmetname))
	{
		Predmet predmet; // Create a Predmet object
		predmet.SetName(predmetname); // Set the name of the subject
		predmet.SetMark(marks_arr[i]); // Set the mark from marks_arr
		student.SetMarks(predmet); // Set the Predmet object for the student
		i++; // Move to the next mark in marks_arr
	}

	in.close(); // Close the file
	delete[] marks_arr; // Deallocate the marks_arr memory
}

void ReadNamesAndMarks(Group& group)
{
	ifstream in_names; // Input file stream for student names
	ifstream in_marks; // Input file stream for student marks

	// Open the files "Students.list" and "Marks.list" for reading
	in_names.open("Students.list");
	in_marks.open("Marks.list");

	if (!in_names.is_open() || !in_marks.is_open())
	{
		cout << "\n\n\tRead error\n\n\n";
		return;
	}

	string name; // Variable to store student name
	string marks; // Variable to store marks string

	// Read each line (student name) from the "Students.list" file
	// and corresponding marks from the "Marks.list" file
	while (getline(in_names, name) && getline(in_marks, marks))
	{
		Student student; // Create a Student object
		student.SetName(name); // Set the name of the student
		ReadPredmets(student, marks); // Read subjects and marks for the student
		group.SetStudent(student); // Add the Student object to the group
	}

	in_names.close(); // Close the student names file
	in_marks.close(); // Close the student marks file
}


int main()
{
	Group group; // Create a Group object to store students

	group.SetGroupName("A1"); // Set the group name

	ReadNamesAndMarks(group); // Read student names and marks and add them to the group

	group.PrintGroup(); // Print the details of the group and its students
}
