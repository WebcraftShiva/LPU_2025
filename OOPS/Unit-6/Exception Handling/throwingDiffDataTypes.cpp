#include <iostream>
using namespace std;

// user-defined exception class we create
class MyExceptionClass
{

public:
    string msg;
    MyExceptionClass()
    {
        msg = "User-defined exception is occuring";
    }
};

int main()
{
    try
    {
        int choice;
        cout << "Enter the choice of exception you want to throw: \n";
        cout << "1.int\n 2. C-string\n 3.double\n 4.object\n";
        cout << "Enter the choice: ";
        cin >> choice;

        if (choice == 1)
        {
            throw 10; // int
        }
        else if (choice == 2)
        {
            throw "Error is of string"; // string
        }
        else if (choice == 3)
        {
            throw 3.14; // double
        }
        else if (choice == 4)
        {
            throw MyExceptionClass(); // object
        }
        else
        {
            cout << "No correct exception choice is done\n";
        }
    }
    // catch for int
    catch (int e)
    {
        cout << "Caught int type of exception: " << e << endl;
    }
    // catch for C-string
    catch (const char *msg)
    {
        cout << "Caught C-string type of exception: " << msg << endl;
    }
    // catch for double
    catch (double d)
    {
        cout << "Caught double type of exception: " << d << endl;
    }
    // catch for object
    catch (MyExceptionClass e)
    {
        cout << "Caught int type of exception: " << e.msg << endl;
    }

    return 0;
}