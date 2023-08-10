#include "Student.h"

void Student::SetName(string name)
{
	this->name = name; // Set the name of the student
}

void Student::SetMarks(Predmet marks)
{
	this->marks.push_back(marks); // Add a mark for a predmet to the student's marks list
}

void Student::PrintStudent()
{
	cout << "\n\n\n\t" << name << "\n"; // Print the student's name

	for (auto predmet : marks)
	{
		predmet.PrintPredmet(); // Print each predmet's name and mark
	}
}
