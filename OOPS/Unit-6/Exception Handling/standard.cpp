#include <iostream>
#include <vector>
using namespace std;


//std:: out_of_range
int main()
{

    vector<int> v = {10, 20, 30};

    try
    {
        cout << v.at(5); // out of bound
    }
    catch (const out_of_range &e)
    {
        cout << "Expression: " << e.what() << endl;
    }
    return 0;
}