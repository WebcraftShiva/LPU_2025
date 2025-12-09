#include <iostream>
using namespace std;

class Number
{
    int x;

public:
    Number(int a = 0)
    {
        x = a;
    }

    // overloading operator: +
    Number operator+(Number obj)
    {
        Number temp;
        temp.x = x + obj.x; // adding values of two objects

        return temp;
    }

    void display()
    {
        cout << x << endl;
    }
};

int main()
{
    Number n1(10), n2(20), result;
    result = n1 + n2; // calling operator+(n2)
    result.display();
    return 0;
}