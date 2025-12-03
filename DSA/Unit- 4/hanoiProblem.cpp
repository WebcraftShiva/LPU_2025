#include <iostream>
using namespace std;

// function: towerOfHanoi: n , source, destination, helper
void towerOfHanoi(int n, char source, char helper, char destination)
{
    // Base case : if only 1 disk is present
    if (n == 1)
    {
        cout << "Move disk 1 to destination directly: " << source << "->" << destination << endl;
        return;
    }
    // Recursive case: more than one or n disk:
    // step 1: move top (n-1) disks from source to helper
    towerOfHanoi(n - 1, source, helper, destination);

    // step 2: move the largest desk from source to destination
    cout << "Moving disk  " << n << "from " << source << "to " << destination << endl;

    // step 3: move (n-1) disk from helper to destination:
    towerOfHanoi(n - 1, helper, destination, source);
}

int main()
{
    cout << "3 Disk: are :" << endl;
    towerOfHanoi(3, 'A', 'B', 'C');

    return 0;
}