#include <iostream>
using namespace std;

class Queue
{
    int *arr;
    int rear, front;
    int size;

public:
    Queue(int n)
    {
        arr = new int[n];
        size = n;
        front = rear = -1;
    }

    bool isEmpty()
    {
        return front == -1;
    }

    bool isFull()
    {
        return (rear + 1) % size == front; // 1st chaange
    }

    void push(int x)
    {

        if (isFull())
        {
            cout << "Queue Overflow";
            return;
        }

        if (isEmpty())
        {

            front = rear = 0;
        }
        else
        {
            rear = (rear + 1) % size;  // 2nd change
        }

        arr[rear] = x;
        cout << "Pushed: " << x << " into the queue\n";
    }

    void pop()
    {

        if (isEmpty())
        {
            cout << "Queue is underflow";
            return;
        }

        cout << "Popped " << arr[front] << "  from the queue\n";

        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = (front + 1) % size;  // 3rd change
        }
    }
};

int main()
{

    Queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.pop();
    q.push(60);
    q.pop();
    q.push(60);

    return 0;
}