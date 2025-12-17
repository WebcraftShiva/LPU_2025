#include <iostream>
using namespace std;

class Shape
{

public:
    // pure virtual class
    virtual void draw() = 0;

    virtual ~Shape() {}
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing circle" << endl;
    }

    ~Circle()
    {
        cout << "Circle Destructor is called:" << endl;
    }
};

int main()
{
    Shape *s = new Circle();
    s->draw();
    delete s;
    return 0;
}