#include <iostream>
#include <string.h>
using namespace std;
//gradebook class definition

class GradeBook
{
private:
    string courseName;
public:
    explicit GradeBook(string name);
    ~GradeBook();
    void setCourseName(string name);
    string getCourseName() const;
    void displayMessage();

};


