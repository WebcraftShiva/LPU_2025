// Parameterized constructor: Constructor that accept parameters to intialize objects with specific values.

#include <iostream>
using namespace std;

class Student
{
    int roll;
    string name;
    float marks;

public:
    Student(int r, string n, float m) // parameterized constructor
    {
        roll = r;
        name = n;
        marks = m;
    }

    void display()
    {
        cout << "Roll: " << roll << " Name: " << name << " Marks: " << marks << endl;
    }
};

int main()
{
    Student s1(101, "Alice", 85.3);
    Student s2(101, "bobby", 85.3);
    s1.display();
    s2.display();

    return 0;
}