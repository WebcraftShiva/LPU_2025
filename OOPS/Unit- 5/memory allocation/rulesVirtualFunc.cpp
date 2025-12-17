#include <iostream>
using namespace std;

class Rules
{
public:
    // rule 1 : checked
    // virtual static void func()

    void func2()
    {
        cout << "Virtual function" << endl;
    }

    // // constructor
    // virtual Rules(){

    // }

    virtual ~Rules()
    {
        cout << "Destructor is ok!";
    }

    friend class Helper;
};

class Helper
{

public:
    void show()
    {
        cout << "Helper class access rule " << endl;
    }
};

int main()
{
    Rules *r = new Rules();
    r->func2();

    delete r;

    return 0;
}