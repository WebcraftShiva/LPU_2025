// Dynamic allocation of title
// Deep copy using copy constructor
// Safe assignment using operator overloading
// Proper cleanup using destructor

#include <iostream>
#include <cstring>
using namespace std;

class Book
{
private:
    char *title;
    int pages;

public:
    // Parameterized constructor
    Book(const char *t, int p)
    {
        pages = p;
        title = new char[strlen(t) + 1];
        strcpy(title, t);
        cout << "Constructor: Book created -> " << title << endl;
    }

    // Copy constructor (deep copy)
    Book(const Book &b)
    {
        pages = b.pages;
        title = new char[strlen(b.title) + 1];
        strcpy(title, b.title);
        cout << "Copy Constructor: Copied -> " << title << endl;
    }

    // Assignment operator
    Book &operator=(const Book &b)
    {
        if (this != &b)
        {
            delete[] title;   // free old memory
            pages = b.pages;
            title = new char[strlen(b.title) + 1];
            strcpy(title, b.title);
            cout << "Assignment Operator: Assigned -> " << title << endl;
        }
        return *this;
    }

    // Display function
    void display() const
    {
        cout << "Book Title: " << title
             << ", Pages: " << pages << endl;
    }

    // Destructor
    ~Book()
    {
        cout << "Destructor: Deleting book -> " << title << endl;
        delete[] title;
    }
};

int main()
{
    Book b1("C++ Programming", 500);
    b1.display();

    Book b2("Data Structures", 450);
    b2.display();

    Book b3 = b1;   // Copy constructor
    b3.display();

    b3 = b2;        // Assignment operator
    b3.display();

    return 0;
}
