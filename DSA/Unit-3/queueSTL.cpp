// STL : standar template library:

// Queue: push, pop, size, front, empty

#include <iostream>
#include <queue>
using namespace std;

int main()
{

    queue<int> q;

    q.push(10);
    q.push(20);
    q.pop();
    q.push(30);
    q.push(40);

    // front element:
    cout << "Front element is: " << q.front() << endl;

    // back element:
    cout << "Back element is: " << q.back() << endl;

    // size of queue:
    cout << "Size of queue is: " << q.size() << endl;

    // check queue is empty:
    cout << "Queue is empty:" << q.empty() << endl;

    return;
}