#include <iostream>
using namespace std;

int main()
{

    int *n = new int(50);

    cout << "Value: " << *n << endl;

    // deletion: in correct way
    delete n;
    n = nullptr;

    cout << "Value: " << *n << endl;
    return 0;
}