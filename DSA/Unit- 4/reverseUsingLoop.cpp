#include <iostream>
#include <vector>

using namespace std;

void reverseLoop(vector<int> &arr)
{
    int left = 0;
    int right = arr.size() - 1;

    while (left < right)
    {
        swap(arr[left], arr[right]);

        left++;
        right--;
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    reverseLoop(arr);

    for (int x : arr)
    {
        cout << x << " " << endl;
    }
}