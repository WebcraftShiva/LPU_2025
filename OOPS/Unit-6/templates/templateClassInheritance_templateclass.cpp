#include <iostream>
using namespace std;

template <typename T>
class Base
{

protected:
    T value;

public:
    Base(T v)
    {
        value = v;
    }

    void show()
    {
        cout << "Value is: " << value << endl;
    }
};

template <typename T>
class Derived : public Base<T>
{
public:
    Derived(T v) : Base<T>(v) {}

    void display()
    {
        // when u want to access the base class member: or this->value and Base<T>::value both work the same
        cout << "My derived class is: " << Base<T>::value << endl;
    }
};

int main()
{
    Derived<int> d1(10);
    Derived<double> d2(25.5);

    d1.display();
    d2.display();

    return 0;
}