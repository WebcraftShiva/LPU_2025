#include <iostream>
using namespace std;

template <typename T>
class Data
{

protected:
    T x;

public:
    Data(T a)
    {
        x = a;
    }
};

class myclass : public Data<int>
{

public:
    myclass(int a) : Data(a) {}

    void show()
    {
        cout << x << endl;
    }
};

int main()
{

    myclass obj(27);

    obj.show();

    return 0;
}