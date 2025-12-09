#include <iostream>
using namespace std;

// overloading unary for - operator:

class Number
{
private:
    int value;

public:
    // constructor : default value:
    Number(int v = 0) : value(v) {}

    // overloading unary operator(-):
    Number operator-()
    {
        Number temp;
        temp.value = -value; // negating the currnt objects value
        return temp;
    }

    // functon to display:

    void display()
    {
        cout << "Value: " << value << endl;
    }
};

int main()
{
    Number n1(10); // original

    Number n2 = -n1;
    n1.display();
    n2.display();

    return 0;
}