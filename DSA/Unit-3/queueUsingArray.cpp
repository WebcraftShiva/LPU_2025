#include <iostream>
using namespace std;

// class -- Queue : Dynamic, var- front, rear: var -- size of queue
class Queue
{
    int *arr;        // Dynamic array: to store queue elements
    int rear, front; // front-- index{1st element}, rear-- index{Last element}
    int size;        // max size of queue

public:
    Queue(int n)
    {
        arr = new int[n];
        size = n;          // telling max size
        front = rear = -1; // initially our queue is empty
    }

    // check: queue is empty or not:
    bool isEmpty()
    {
        return front == -1;
    }

    // check: queue is full or not
    bool isFull()
    {
        return rear == size - 1;
    }

    // insert element in our queue(enqueue):
    void push(int x)
    {

        if (isFull())
        {
            cout << "Queue Overflow";
            return;
        }

        if (isEmpty())
        {
            // when this schenario arises: both rear and front points to 1st inserted element:

            front = rear = 0;
        }
        else
        {
            rear++; // moving rear forward to insert new element
        }

        arr[rear] = x;
        cout << "Pushed: " << x << " into the queue\n";
    }

    // insert element in our queue(enqueue):
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
            front++;
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
    // q.push(60);
    q.pop();
    q.push(60);

    return 0;
}