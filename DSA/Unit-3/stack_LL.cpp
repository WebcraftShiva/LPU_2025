#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

// class stack:
class Stack
{
private:
    Node *top;

    // constructor:
public:
    Stack()
    {
        top = nullptr;
    }

    bool isEmpty()
    {
        return top == nullptr;
    }

    // 1.push operation:
    void push(int value)
    {
        Node *newNode = new Node(value);

        if (!newNode)
        {
            cout << "Memory allocation fails:";
            return;
        }
        newNode->next = top; // linking to previous top
        top = newNode;       // updating top
    }

    // 2.pop opertion:
    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack underflow" << endl;
            return -1;
        }
        Node *temp = top;
        int val = temp->data;
        top = top->next;
        delete temp;
        return val;
    }

    // 3.size:
    int size()
    {
        int count = 0;
        Node *temp = top;
        while (temp)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }

    // 4. top element:
    int peek()
    {
        if (isEmpty())
        {
            cout << "Stack underflow" << endl;
            return -1;
        }
        return top->data;
    }

    // display:
    void display()
    {
        if (isEmpty())
        {
            cout << "Stack is empty\n";
            return;
        }
        Node *temp = top;
        cout << "stack from top to bottom: " << endl;
        while (temp)
        {
            cout << temp->data << "\n";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{

    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.display();

    cout << "Popped: " << s.pop() << endl;

    cout << "Stack size: " << s.size() << endl;

    cout << "Stack top element: " << s.peek() << endl;
    return 0;
}