#pragma once
#include <iostream>
using namespace std;

class Predmet
{
private:

    // The name of the predmet (subject)
    string name = ""; 
    
    // The mark (score) for the predmet
    int mark = 0; 

public:
    // Set the name of the predmet
    void SetName(string); 

    // Set the mark for the predmet
    void SetMark(int); 

    // Print the details of the predmet
    void PrintPredmet(); 
};
