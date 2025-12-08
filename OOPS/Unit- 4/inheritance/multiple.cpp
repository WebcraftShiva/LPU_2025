// Multiple inheritance: one derived inherits from two or more base classes.

#include <iostream>
using namespace std;

class A
{
public:
    int x;

    void setA(int a)
    {
        x = a;
    }
};

class B
{
public:
    int y;

    void setB(int b)
    {
        y = b;
    }
};

class C : public A, public B
{
public:
    void add()
    {
        cout << "Adding A and B" << x + y << endl;
    }
};

int main()
{

    C obj;
    obj.setA(5);
    obj.setB(6);
    obj.add();
}