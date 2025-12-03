#include <iostream>
using namespace std;

// function to swap 2 element: function name is swap()
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// function : pivot place correct position: function name is pivotPos( int arr[], int low, int high)
int pivotPos(int arr[], int low, int high)
{
    int pivot = arr[high]; // last element

    int i = low - 1; // index of smallest element

    // traverse
    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++; // move smallest index forward

            swap(arr[i], arr[j]); // placing smallest element on left
        }
    }
    // Pivot place correct position
    swap(arr[i + 1], arr[high]);
    return i + 1; // getting pivot index
}

// function for out reverse : quick sort: quicksort=( arr, low, high):
void quicksort(int arr[], int low, int high)
{

    if (low < high)
    {
        int p = pivotPos(arr, low, high); // pivot position index

        // recursively sort left part:
        quicksort(arr, low, p - 1);

        // / recursively sort right part
        quicksort(arr, p + 1, high);
    }
}

int main()
{

    int arr[] = {10,7,8,9,1,5};

    int n = sizeof(arr)/ sizeof(arr[0]);

    quicksort(arr,0,n-1);

    cout<<"My sorted array using quick sort: "<<endl;

    for(int i = 0; i <n ; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}