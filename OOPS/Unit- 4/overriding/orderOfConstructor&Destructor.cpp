#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "This is a Base Constructor\n";
    }
    ~Base()
    {
        cout << "This is a Base Destructor\n";
    }
};

class Derived : public Base
{

public:
    Derived()
    {
        cout << "This is a Derived Constructor\n";
    }
    ~Derived()
    {
        cout << "This is a Derived Destructor\n";
    }
};

int main()
{

    Derived obj;
    return 0;
}