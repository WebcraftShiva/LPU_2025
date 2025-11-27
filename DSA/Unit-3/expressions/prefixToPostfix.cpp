#include <iostream>
#include <stack>
using namespace std;

// Function to check whether the character is an operator
bool isOperator(char ch)
{
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^');
}

int main()
{
    string prefix;
    stack<string> st;
    cout << "Enter PREFIX Expression: ";
    cin >> prefix;

    // Scan the prefix expression from RIGHT to LEFT
    for (int i = prefix.length() - 1; i >= 0; i--)
    {
        char ch = prefix[i];

        // If operand (letter or digit), push as string
        if (isalnum(ch))
        {
            string op(1, ch);
            st.push(op);
        }

        // If operator
        else if (isOperator(ch))
        {
            // Pop top two operands
            string op1 = st.top();
            st.pop();
            string op2 = st.top();
            st.pop();

            // Create postfix expression
            string exp = op1 + op2 + ch;
            // Pushing back into the stack
            st.push(exp);
        }
    }

    // Final postfix expression will be at the top of stack
    cout << "Postfix Expression: " << st.top();
    return 0;
}