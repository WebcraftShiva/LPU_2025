#include <iostream>
using namespace std;

class Name
{

private:
    char *nm;
    int length;

public:
    // explicit constructor which will prevent implicit conversion
    explicit Name(int len)
    {
        length = len;
        nm = new char[length + 1];
        nm[0] = '\0';
        cout << "String object created with length" << length << endl;
    }

    ~Name()
    {
        delete[] nm;
    }

    void display()
    {
        cout << "My string length is: " << length << endl;
    }
};

int main()
{
    Name n1 = Name(10);
    n1.display();

    Name n2(20);
    n2.display();

    // Name n3 = 30;  // this will cause error: implicit conversion not allowed

}