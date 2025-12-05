#include <iostream>
using namespace std;

// Base class:
class Animal
{
public:
    void eat()
    {
        cout << "Animal is eating fruit";
    }
};

// Derived classs:
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog is barking";
    }
};

int main()
{
    Dog d;
    d.eat();
    d.bark();
    return 0;
}


// Base class: student: memeber function getInfo: vcout

// Derived class: BtechStudent:cout: i am group 2 student