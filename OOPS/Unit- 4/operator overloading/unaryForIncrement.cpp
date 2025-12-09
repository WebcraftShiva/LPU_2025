#include <iostream>
using namespace std;

class Counter
{

private:
    int count;

public:
    Counter(int c = 0) : count(c) {}

    // prefix:
    Counter &operator++()
    {
        ++count;
        return *this;
    }

    // postfix:
    Counter operator++(int)
    {

        Counter temp = *this; // saving older value
        count++;
        return temp;
    }

    void display()
    {
        cout << "Count: " << count << endl;
    }
};

int main()
{
    Counter c(5);
    cout << "Initial Value of count: \n";
    c.display();

    cout << "After Value of count: \n";
    ++c; // prefix incrementing
    c.display();

    c++; // postfix increment:
    c.display();
    return 0;
}