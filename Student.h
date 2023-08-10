#pragma once
#include <iostream>
#include <vector>
#include "Predmet.h"
using namespace std;

class Student
{
private:
	// Name of the student
	string name = ""; 

	// Vector to store marks for different predmets (subjects)
	vector<Predmet> marks; 

public:
	// Set the name of the student
	void SetName(string name);

	// Add a mark for a predmet to the student's marks list
	void SetMarks(Predmet marks);

	// Print the student's details and marks
	void PrintStudent();
};
