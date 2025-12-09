// Problem: when  a class is inherited multiple times throug two different paths leading to duplicate copies of base class members:

// Without virtual base class:

#include <iostream>
using namespace std;

class A
{
public:
    int x;
    A()
    {

        cout << "A's  constructor\n";
    }
};

class B : virtual public A
{
public:
    B()
    {
        cout << "B's  constructor\n";
    }
};

class C : virtual public A
{
public:
    C()
    {
        cout << "C's constructor\n";
    }
};

class D : public B, public C
{
public:
    D()
    {
        cout << "D's constructor\n";
    }
};

int main()
{
    D obj;
    obj.x = 100;

    cout << "Value of x is: " << obj.x << endl;
    return 0;
}