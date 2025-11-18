#include <iostream>
using namespace std;

// defining the size of the array:
#define SIZE 5

int stackArr[SIZE];
int top = -1; // empty stack

// function to perform push operations
void push(int value)
{

    // condition : overflow:
    if (top == SIZE - 1)
    {
        cout << "Stack Overflow" << endl;
        return;
    }

    // we will move to upward and put our value
    top++;
    stackArr[top] = value;

    cout << "Pushed value is: " << value << endl;
}

void display()
{
    if (top == -1)
    {
        cout << "Stack is empty" << endl;
        return;
    }

    cout << "Stack elements are (top -> bottom):";

    for (int i = top; i >= 0; i--)
    {
        cout << stackArr[i] << " ";
    }
}

int main()
{

    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

    display();

    push(60);
    display();

    return 0;
}