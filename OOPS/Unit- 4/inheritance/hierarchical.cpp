// Hierarchical inheritance: Here we have one base class and multiple derived classes.

#include <iostream>
using namespace std;

// Base class:
class values
{
protected:
    int a, b;

public:
    void set(int x, int y)
    {
        a = x;
        b = y;
    }
};

// derived class:
class Add : public values
{
public:
    void sum()
    {
        cout << "Addition of 2 number is: " << a + b << endl;
    }
};

class Subtract : public values
{
public:
    void sub()
    {
        cout << "Subtraction of 2 number is: " << a - b << endl;
    }
};

int main()
{

    Add a;
    Subtract s;

    a.set(10, 20);

    a.sum();

    s.set(30, 20);
    s.sub();
}