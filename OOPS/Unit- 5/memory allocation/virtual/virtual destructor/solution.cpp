#include <iostream>
using namespace std;

// base class:
class Base
{

private:
    int *baseData;

public:
    Base()
    {
        baseData = new int[10];
        cout << "Base constructor: allocating memory\n";
    }

    // non- virtual:
    virtual ~Base()
    {
        delete[] baseData;
        cout << "Base Destructor:  free memory\n";
    }
};

// Derived class:
class Derived : public Base
{

private:
    int *derviedData;

public:
    Derived() : Base()
    {
        derviedData = new int[20];
        cout << "Derived Constructor: allocating memory\n";
    }

    ~Derived()
    {

        delete[] derviedData;
        cout << "Derived destructor: allocating memory\n";
    }
};

int main()
{

    Base *ptr = new Derived();
    cout << "Deleting object\n";
    delete ptr;

    cout << "Memory is freed properly";

    return 0;
}