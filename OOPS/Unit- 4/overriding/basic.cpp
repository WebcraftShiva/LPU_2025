#include <iostream>
using namespace std;

class A
{

public:
    void display()
    {
        cout << "This is our Base class\n";
    }
};

class B : public A
{

public:
    void display()
    {
        cout << "This is our derived class \n";
    }
};

int main()
{
    A a;
    B b;

    a.display();
    b.display();

    return 0;
}