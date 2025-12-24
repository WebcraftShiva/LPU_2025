#include <iostream>
using namespace std;

class Animal
{

public:
    void sound()
    {
        cout << "Animal has a sound" << endl;
    }
};

template <typename T>
class Dog : public Animal
{

private:
    T age;

public:
    Dog(T a)
    {
        age = a;
    }

    void showAgeOfDog()
    {
        cout << "Dog age is: " << age << endl;
    }
};

int main()
{
    Dog<int> d(6);

    d.sound();
    d.showAgeOfDog();

    return 0;
}