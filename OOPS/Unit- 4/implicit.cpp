// int to float

#include <iostream>
using namespace std;

int main()
{

    // PART 2: CHAR TO INT:

    char letter = 'B';
    int hello;

    hello = letter;

    cout << "Character is: " << letter << endl;
    cout << "Interger is: " << hello << endl;

    int result = letter + 5;

    cout << "Character is: " << result << endl;
    cout << "Result is: which was of char previously " << (char)result << endl;

    // // PART 1 : INT -> FLOAT
    // int number = 25;

    // float result;

    // // Implicit conversion from int to float:
    // result = number;

    // cout << "Interger values is: " << number << endl;
    // cout << "Float values is: " << result << endl;

    // //
    // float division = number / 2.7; // number is implicitly converted to float
    // cout << "Division result is:" << division << endl;

    return 0;
}