#include <iostream>
using namespace std;

class Student
{

private:
    string name;
    int rollNumber;
    float marks;

public:
    Student(string n, int r, float m) : name(n), rollNumber(r), marks(m)
    {

        cout << "Constructor is calling" << name << endl;
    }

    ~Student()
    {
        cout << "Destructor is called" << name << endl;
    }

    void display()
    {

        cout << "Name is: " << name << "Roll Number is:" << rollNumber << "Marks is: " << marks << endl;
    }
};

int main()
{

    Student *s1 = new Student("Alice", 101, 12);

    s1->display();

    delete s1;
    cout << "Destructor is called";

    return 0;
}