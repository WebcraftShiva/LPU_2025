#include <iostream>
using namespace std;

class Student
{
    int roll;

public:
    Student(int r) : roll(r)  // initializer list
    {
    }
    void show()
    {
        cout << "Roll: " << roll << endl;
    }
};

int main()
{
    // 3: initializer list in constructor:
    Student s(10);
    s.show();

    // // 2. initializer list array:

    // int arr[]{10, 20, 30, 40, 50};

    // cout << "Array element: " << endl;

    // for (int i = 0; i < 4; i++)
    // {
    //     cout << arr[i] << endl;
    // }

    // // 1. initializer list for varaibles

    // int  a = 10;
    // int b{20};  // initializer list style

    // cout<<"a = "<<a<<endl;
    // cout<<"b = "<<b<<endl;

    return 0;
}