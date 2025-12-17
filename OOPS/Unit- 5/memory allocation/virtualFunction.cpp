#include <iostream>
#include <string>
using namespace std;

class Animal
{

protected:
    string name;

public:
    Animal(string n) : name(n)
    {
        cout << "Animal constructor is: " << name << endl;
    }

    virtual ~Animal()
    {
        cout << "Animal destructor is: " << name << endl;
    }

    // virtaul function
    virtual void sound()
    {
        cout << name << "Makes a sound" << endl;
    }

    // virtaul function
    virtual void move()
    {
        cout << name << "is moving" << endl;
    }

    // Non- virtaul function
    void eat()
    {

        cout << name << "is eating" << endl;
    }
};

class Dog : public Animal
{

public:
    Dog(string n) : Animal(n)
    {
        cout << "Dog constructor" << endl;
    }

    ~Dog()
    {
        cout << "Dog destructor" << endl;
    }

    // overriding virtual function:
    void sound() override
    {
        cout << "barking : bhaao bhao" << endl;
    }

    void move() override
    {
        cout << name << "Runs at 100 kmps" << endl;
    }
};

class Cat : public Animal
{

public:
    Cat(string n) : Animal(n)
    {
        cout << "Cat constructor" << endl;
    }

    ~Cat()
    {
        cout << "Cat destructor" << endl;
    }

    // overriding virtual function:
    void sound() override
    {
        cout << "meow : Meow Meow" << endl;
    }

    void move() override
    {
        cout << name << "Runs and jumps" << endl;
    }
};

int main()
{

    Animal *animals[2];
    animals[0] = new Dog("Browno");
    animals[0] = new Cat("whisky");

    cout << "Run time polymorphism is working";

    for (int i = 0; i < 2; i++)
    {
        cout << " Animal " << i + 1 << "\n";
        animals[i]->sound();
        animals[i]->move();
        animals[i]->eat();
    }

    cout << "Deleting animals \n";
    for (int i = 0; i < 2; i++)
    {
        delete animals[i];
    }

    return 0;
}