#include <iostream>
using namespace std;

// derived class
class Apple
{

public:
    void eat()
    {
        cout << "Eating apple\n";
    }
};

// Base class
class Fruit
{
    Apple *apple; // aggrigation (pointer/ reference)

public:
    Fruit(Apple *a)
    {
        apple = a;
    }

    void show()
    {
        apple->eat();
        cout << "Fruit got eaten";
    }
};

int main()
{

    Apple a; // apple exist: independently

    Fruit f(&a); // fruit using apple as aggrigation

    f.show(); // using external object
    return 0;
}