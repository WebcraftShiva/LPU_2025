#include <iostream>
#include <list>
using namespace std;

int main()
{

    list<int> l1;
    list<int> l2 = {10, 20, 30, 40, 50};

    l1.push_back(10);
    l1.push_front(5);

    cout << l1.front() << endl;
    cout << l1.back() << endl;
    cout << l1.size() << endl;

    l1.pop_back();
    l1.pop_front();

    l1.clear();

    return 0;
}