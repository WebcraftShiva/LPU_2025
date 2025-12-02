// Default constructor: A constructor with no parameter that initialzes object with default value.

#include <iostream>
using namespace std;

class Student
{
    int roll;

public:
    Student()
    {                                  // constructor
        cout << "Default constructor"; // default constructor
    }
};

int main()
{

    Student s;
    return 0;
}