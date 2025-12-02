#include <iostream>
#include <vector>

using namespace std;

void reverseRecursion(vector<int> &arr, int left, int right)
{

    // base case:
    if (left >= right)
    {
        return;
    }

    // recursive case: swap
    swap(arr[left], arr[right]);
    reverseRecursion(arr, left + 1, right - 1);
}

int main()
{

    vector<int> arr = {1, 2, 3, 4, 5};

    reverseRecursion(arr, 0, arr.size() - 1);

    for (int x : arr)
    {
        cout << x << " ";
    }
    return 0;
}