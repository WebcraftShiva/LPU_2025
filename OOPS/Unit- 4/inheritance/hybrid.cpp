// Hybrid Inheritance: Its a combination of multiple inheritance and hierarichal inheritance:

#include <iostream>
using namespace std;

// Base class:
class A
{
public:
    void showA()
    {
        cout << "This is a class A";
    }
};

// multiple
class B : public A
{
public:
    void showB()
    {
        cout << "This is a class B";
    }
};

// multiple
class C : public A
{
public:
    void showC()
    {
        cout << "This is a class C";
    }
};

// hierarchail
class D : public B, public C
{
public:
    void showD()
    {
        cout << "This is a class D";
    }
};

int main()
{
    D obj;
    obj.showB();
    obj.showC();
    obj.showD();
    return 0;
}