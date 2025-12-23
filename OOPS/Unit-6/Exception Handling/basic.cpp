#include <iostream>
using namespace std;

int divide(int a, int b)
{
    if (b == 0)
    {
        throw "Division by zero is not acceptable";
    }
    return a / b;
}

int main()
{
    int x, y;

    cout << "Enter two numbers";
    cin >> x >> y;

    try
    {
        int result = divide(x, y);
        cout << "Result is: " << result << endl;
    }
    catch (const char *msg)
    {
        cout << "Exception Handling caught:" << msg << endl;
    }

    return 0;
}