#include "Predmet.h"

void Predmet::SetName(string name)
{
    this->name = name; // Set the name of the predmet (subject)
}

void Predmet::SetMark(int mark)
{
    this->mark = mark; // Set the mark for the predmet (subject)
}

void Predmet::PrintPredmet()
{
    cout << "\n\t" << name << " " << mark; // Print the name and mark of the predmet
}
