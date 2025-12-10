#include <iostream>
using namespace std;

int main()
{
    // Float -> int conversion

    float decimal = 7.23;
    int number;

    // Method: 1.C-style cast:
    number = (int)decimal;
    cout << "C-style caste is: " << number << endl;

    // Method 2: function style cast:
    number = int(decimal);
    cout << "Function style caste is: " << number << endl;

    // Method 3: static caste(C++ style):
    number = static_cast<int>(decimal);
    cout << "Static-style caste is: " << number << endl;
}