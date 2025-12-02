// Default constructor: A constructor with no parameter that initialzes object with default value.

#include <iostream>
using namespace std;

class Student
{
    int roll;

public:
    Student() // constructor
    {
        roll = 10;
        cout << "Default constructor"; // default constructor
    }

    void display()
    {
        cout << "Roll Number is: " << roll;
    }
};

int main()
{

    Student s;   // calling user defined constructor automatically
    s.display(); // showing the value that we have set by constructor
    return 0;
}