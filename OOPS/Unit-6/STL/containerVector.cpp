#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v1;        // empty vector
    vector<int> v2(5);     // vector of size 5
    vector<int> v3(5, 10); // vector of size 5 and all having value 10

    // insert element:
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);

    // Access:
    // cout << v1[0] << endl;
    // cout << v1.at(1) << endl;
    // cout << v1.front() << endl;
    // cout << v1.back() << endl;

    // size:
    // cout << v1.size() << endl;

    // removing:
    v1.pop_back();
    v1.clear();

    return 0;
}