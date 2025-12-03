#include <iostream>
using namespace std;

class Demo
{

    int x;
    float y;

public:
    Demo(int a, float b) : x(a), y(b)
    {
    }
    void show()
    {
        cout << "X: " << x << endl;
        cout << "Y: " << y << endl;
    }
};

int main()
{
    Demo obj(10, 5.5);
    obj.show();
    return 0;
}