#include <iostream>
using namespace std;
#define MAX 100

int stackArr[MAX];
int top = -1;

// 1.checking our stack is full or not
bool isFull()
{
    return top == MAX - 1; // overflow
}

// 2. checking our stack is empty or not:
bool isEmpty()
{
    return top == -1; /// underflow
}

// 3.Push operation:
void push(int value)
{
    if (isFull())
    {
        cout << "Stack is overflow" << endl;
        return;
    }
    top++;                 // moving top upward
    stackArr[top] = value; // inserting values at top
}

// 4. Pop operation:
void pop()
{
    if (isEmpty())
    {
        cout << "Stack is overflow" << endl;
        return;
    }
    int x = stackArr[top];

    top--; // reducing top value
    cout << "Popped value:" << x << endl;
}

// 5. peep element/ return top element in stack:
int peek()
{
    if (isFull())
    {
        cout << "Stack is overflow" << endl;
        return -1;
    }
    return stackArr[top];
}

// 6. size of stack:
int issize()
{
    return top + 1;
}

// To display:
void display()
{
    if (isEmpty())
    {
        cout << "This stack is empty" << endl;
        return;
    }

    cout << "Stack top + bottom values are:" << endl;

    for (int i = top; i >= 0; i--)
    {
        cout << stackArr[i] << endl;
    }
}

int main()
{

    push(10);
    push(20);
    push(30);
    display();

    // pop:
    pop();
    display();

    // peek
    cout << "Top element:" << peek()<<"\n";

    // size:
    cout << "Size of stack is: " << issize();

    return 0;
}