#include <iostream>
using namespace std;

int main()
{

    // PHASE 2: allocation for array:
    int size;

    cout << "Enter the size of an array: ";
    cin >> size;

    // dynamically allocation in array:

    int *arr = new int[size];

    cout << "Enter the elements\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    // deallocate array:
    delete arr;

    return 0;
}

// PHASE 1:
// int main()
// {

// // alocating interger
// int *ptr = new int;

// *ptr = 7;

// cout << "Value: " << *ptr << endl;
// cout << "Address: " << ptr << endl;

// // allocation and initialisation:
// float *p = new float(12.5);

// cout << "Initialiized value is: " << *p << endl;

// // deallocation: getting garbage values or address
// delete ptr;
// delete p;

// cout << "Value: " << *ptr << endl;
// cout << "Address: " << ptr << endl;

//     return 0;
// }