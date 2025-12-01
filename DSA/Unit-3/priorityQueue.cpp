#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 2. for min:
    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(10);
    pq.push(20);
    pq.push(5);
    pq.push(1);

    while(!pq.empty()){
        cout<<"Priority queue with min type:"<<pq.top()<< " ";
        pq.pop();
    }


    // // 1.for max
    // priority_queue<int>pq; // max heap

    // pq.push(10);
    // pq.push(5);

    // cout << pq.top();
}