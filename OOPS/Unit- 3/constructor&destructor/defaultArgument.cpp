// constructor with default argument: constructor where parameters have default values

#include <iostream>
using namespace std;

class Rectangle
{
    int length, width;

public:
    Rectangle(int l = 10, int w = 5)  // default values
    {
        length = l;
        width = w;
    }

    void display()
    {
        cout << "Length: " << length << "width: " << width << endl;
    }
};

int main()
{
    Rectangle r1;  // 10,5 : both deafult
    Rectangle r2(20); // 20,5: w is default

    r1.display();
    r2.display();
    return 0;
}