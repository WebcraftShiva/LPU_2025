#include <iostream>
using namespace std;

// 1 2 1  --> 1  2 1 ,   3 2 3 --- 3 2 3

bool isPandindrom(string s, int left = 0, int right = -1)
{

    if (right == -1)
    {
        right = s.length() - 1;
    }

    // base case:
    if (left >= right)
    {
        return true;
    }

    // recursive case:
    if (s[left] != s[right])
    {
        return false;
    }

    return isPandindrom(s, left + 1, right - 1);
}

int main()
{

    cout<<isPandindrom("racecar")<<endl; // true-- palindrom
    cout<<isPandindrom("hello")<<endl;  // false-- not palindrom
    return 0;
}