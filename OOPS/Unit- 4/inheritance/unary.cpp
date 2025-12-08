#include <iostream>
using namespace std;

class Number
{
private:
    int value;

public:
    // constructor with default value
    Number(int v = 0) : value(v) {}
    // uniary overloading: "-""
    Number operator-()
    {
        Number temp;
        temp.value = -value;
        return temp;
    }

    // display function:
    void display()
    {
        cout << "Value : " << value << endl;
    }
};

int main()
{
    Number n1(10);

    Number n2 = -n1;

    n1.display();
    n2.display();

    return 0;  // n1 = 10 , n2 = -n1: call operator -
}