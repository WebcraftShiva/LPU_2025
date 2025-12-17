// Late binding means the function call is resolved at run-time

#include <iostream>
using namespace std;

class Animal
{

public:
    virtual void sound()
    {
        cout << "Animal is making a sound \n";
    }
};

class Dog : public Animal
{
public:
    void sound()
    {
        cout << "Animal is making some sound";
    }
};

int main()
{
    Animal *a;
    Dog d;
    a = &d;
    a->sound(); // bound at runtime

    return 0;
}