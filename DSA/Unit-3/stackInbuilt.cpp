#include <iostream>
#include <stack>
using namespace std;

int main()
{

    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout << "Top after push: " << st.top() << "\n";
    st.pop();
    cout << "Top after pop: " << st.top() << "\n";

    return 0;
}