#include <iostream>
using namespace std;

class A
{
public:
    void show()
    {
        cout << "Class A displayed";
    }
};

class B
{
public:
    void show()
    {
        cout << "Class B displayed";
    }
};

class C : public A, public B
{
};

int main()
{

    C obj;
    // obj.show();  // Error ambiguous
    cout << "Above one is Ambiguous logic";

    return 0;
}