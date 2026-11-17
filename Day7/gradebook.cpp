#include <iostream>
#include <gradebook.h>
#include <string>


GradeBook::GradeBook(string name):courseName(name){};
GradeBook::~GradeBook() { cout << "GradeBook destructor\n"; }

void GradeBook::setCourseName(string name)
{ courseName = name; }

string GradeBook::getCourseName() const
{ 
    return courseName;
}
void GradeBook::displayMessage()
{
    cout << "Grade book for " << courseName << "!\n";
}
