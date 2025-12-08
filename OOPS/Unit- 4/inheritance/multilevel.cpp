// Multilevel inheritance:  When a derived class inherits from another derived class then it is called multilevel inheritance:

#include <iostream>
using namespace std;

// base class:
class GrandParents
{

public:
    void showG()
    {
        cout << "Grandfather--> 1 acre" << endl;
    }
};

// derived class
class Father : public GrandParents
{
public:
    void showF()
    {
        cout << "Father Bought --> 2 acres" << endl;
    }
};

// derived class-- multilevel inheritance:
class Son : public Father
{
public:
    void showS()
    {
        cout << "I am richy richy i have both geeration properties" << endl;
    }
};

int main()
{
    Son s;
    s.showF();
    s.showG();
    s.showS();
}