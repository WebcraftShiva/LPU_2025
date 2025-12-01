#include <iostream>
#include <queue>

using namespace std;

int main()
{

    deque<int> dq;

    // push: insertion:
    dq.push_back(10);  // 10
    dq.push_front(20); // 20, 10
    dq.push_back(30);  // 20,10,30

    dq.pop_back();  // 20,10
    dq.pop_front(); // 10

    while (!dq.empty())
    {
        cout << "Deque is: " << dq.front();
        dq.pop_front();
    }
}