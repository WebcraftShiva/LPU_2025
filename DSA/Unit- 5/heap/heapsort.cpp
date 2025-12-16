#include <iostream>
#include <vector>
using namespace std;

void heapify(vector<int> &a, int n, int i)
{

    while (true)
    {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < n && a[left] > a[largest])

            largest = left;

        if (right < n && a[right] > a[largest])
            largest = right;

        if (largest == i)
            break; // already heap

        swap(a[i], a[largest]); // moving largest child up

        i = largest; // continue for other subtree --> move downward
    }
}

// build your max heap:
void maxHeap(vector<int> &a)
{

    int n = (int)a.size();

    for (int i = n / 2 - 1; i >= 0; --i)
    {
        heapify(a, n, i);
    }
}

// create max-heap in sorted order: ascending order
void heapSort(vector<int> &a)
{

    int n = (int)a.size();

    if (n <= 1)
        return;

    maxHeap(a);

    for (int heapSize = n; heapSize > 1; --heapSize)
    {
        swap(a[0], a[heapSize - 1]); // move current max towards end
        heapify(a, heapSize - 1, 0); // restore: heapsize after reduce
    }
}

int main()
{
    vector<int> arr = {12, 13, 15, 28, 6};

    cout << "My original Array: " << " " << endl;

    for (int z : arr)
        cout << z << endl;

    heapSort(arr);

    cout << "After using HeapSort: ";
    for (int z : arr)
        cout << z << " ";

    return 0;
}