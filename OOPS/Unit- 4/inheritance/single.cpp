#include <iostream>
using namespace std;

//  USing maths operations:

// Base class:
class Number
{
protected:
    int x;

public:
    void setX(int n)
    {
        x = n;
    }
};

// derived class:
class Square : public Number
{
public:
    void calculate()
    {
        cout << "Square is: " << x * x << endl;
    }
};

int main()
{
    Square s;
    s.setX(7);
    s.calculate();
}

// Normal one
// // Base class:
// class Animal
// {
// public:
//     void eat()
//     {
//         cout << "Animal is eating fruit";
//     }
// };

// // Derived classs:
// class Dog : public Animal
// {
// public:
//     void bark()
//     {
//         cout << "Dog is barking";
//     }
// };

// int main()
// {
//     Dog d;
//     d.eat();
//     d.bark();
//     return 0;
// }
