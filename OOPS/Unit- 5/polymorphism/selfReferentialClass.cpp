#include <iostream>
using namespace std;

class Node
{

public:
    int roll;
    Node *next; // pointer to the next of same class type
    Node(int r)
    {
        roll = r;
        next = nullptr;
    }
};

class StudentList
{
private:
    Node *head;

public:
    StudentList()
    {
        head = nullptr;
    }

    void addStudent(int roll)
    {
        Node *n = new Node(roll);
        n->next = head;
        head = n;
    }

    void showStudents()
    {

        Node *temp = head;
        cout << "Students: ";

        while (temp != nullptr)
        {
            cout << temp->roll << "->";
            temp = temp->next;
        }
    }

    ~StudentList()
    {
        while (head != nullptr)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main()
{

    StudentList s;
    s.addStudent(101);
    s.addStudent(102);
    s.showStudents();
    return 0;
}