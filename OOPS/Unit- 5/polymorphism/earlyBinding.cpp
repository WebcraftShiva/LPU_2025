#include <iostream>
using namespace std;

class Animal
{

public:
    void sound()
    {
        cout << "Animal is making a sound \n";
    }
};

int main()
{
    Animal a;
    a.sound(); // Bound at compile time

    return 0;
}