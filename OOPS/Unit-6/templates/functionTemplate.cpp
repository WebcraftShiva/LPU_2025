#include <iostream>
using namespace std;

// function template:
template <class T>
T maximum(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    cout << "Maximum of integer 10 and 20 is:" << maximum(10, 20) << endl; // int
    cout << maximum(10.5, 20.32) << endl;                                  // double
    cout << maximum('s', 'x') << endl;                                     // char

    return 0;
}