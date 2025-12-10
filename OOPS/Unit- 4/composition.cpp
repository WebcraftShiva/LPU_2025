#include <iostream>
using namespace std;

// derived class
class Apple
{

public:
    Apple()
    {
        cout << "Eating apple\n";
    }
};

// Base class
class Fruit
{
    Apple apple; // composition(direct object)

public:
    void show()
    {
        cout << "Fruit got eaten";
    }
};

int main()
{

    Fruit a;
    a.show();
    return 0;
}