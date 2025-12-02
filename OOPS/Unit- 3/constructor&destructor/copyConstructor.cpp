// Copy constructor: A constructor that creates the new object as a copy of an existing object is called copy constructor:

// copy constructor is called under certain scenerios:
// 1. object passed by value
// 2. object return by value
// 3. object initialized from another object;

// Parameterized constructor: Constructor that accept parameters to intialize objects with specific values.

#include <iostream>
using namespace std;

class marks
{

public:
    int x;
    int *ptr;
};

int main()
{
    marks m1;

    m1.x = 10; // defualt copy constuctor
    m1.ptr = new int(20);

    marks m2 = m1;
    m2.x = 10;       // value is being copied
    m2.ptr = m1.ptr; // address copy - both point to same memory

    cout << m1.x<<endl;
    cout << m1.ptr;

    return 0;
}