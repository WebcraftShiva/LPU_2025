#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {30, 10, 50, 60, 15, 15, 15};
    cout << "My original vector is: ";
    for (int x : v)
    {
        cout << x << " " << endl;
    }
    cout << endl;

    // sorting vector in ascending order:
    sort(v.begin(), v.end());
    cout << "After Performing sorting in vector(ascending): \n";
    for (int x : v)
    {
        cout << x << " " << endl;
    }

    // sorting vector in decending order:
    sort(v.begin(), v.end(), greater<int>());
    cout << "After Performing sorting in vector(descending): \n";
    for (int x : v)
    {
        cout << x << " " << endl;
    }

    // finding element using STL:
    auto it = find(v.begin(), v.end(), 30);
    if (it != v.end())
    {
        cout << "Element 30 was found at position: " << (it - v.begin()) << endl;
    }
    else
        cout << "Element not found" << endl;

    // Perform binary search: we must have sorted array:
    sort(v.begin(), v.end());
    if (binary_search(v.begin(), v.end(), 50))
    {
        cout << "Element  50 found using Binary search: " << endl;
    }
    else
        cout << "Element not found using Binary search";

    // count occurances:
    int cnt = count(v.begin(), v.end(), 15);
    cout << "Count of 15 is: " << cnt << endl;

    return 0;
}