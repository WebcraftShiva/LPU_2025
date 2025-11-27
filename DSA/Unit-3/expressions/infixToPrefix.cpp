#include <iostream>
#include <stack>
#include <algorithm> // for using reverse function
#include <cctype>
using namespace std;

// function for operator priority:
int precedence(char c)
{
    if (c == '^')
        return 3;

    if (c == '*' || c == '/')
        return 2;

    if (c == '+' || c == '-')
        return 1;

    return 0; // no operator is there out of tthese
}

// check weather character is an operator
bool isOperator(char c)
{

    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

// convert infix to postfix:
string infixToPostfix(const string &infix)
{

    stack<char> st;
    string postfix = "";

    for (char c : infix)
    {
        if (isalnum(c))
        {
            postfix += c; // operand;
        }
        else if (c == '(')
        {
            st.push(c);
        }
        else if (c == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                postfix += st.top();
                st.pop();
            }
            if (!st.empty())
                st.pop(); // removing all '('
        }
        else if (isOperator(c))
        {
            while (!st.empty() && precedence(st.top()) > precedence(c))
            {
                postfix += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while (!st.empty())
    {
        postfix += st.top();
        st.pop();
    }
    return postfix;
}

// convert infix to prefix: using reverse technique:
string infixToPrefix(string infix)
{

    reverse(infix.begin(), infix.end());

    // swapping '(' to ')': vs versa
    for (char &c : infix)
    {
        if (c == '(')
            c = ')';
        else if (c == ')')
            c = '(';
    }

    string postfix = infixToPostfix(infix);

    // reverse postfix to prefix:
    reverse(postfix.begin(), postfix.end());

    return postfix;
}

int main()
{
    string infix = "A+B*C";
    string prefix = infixToPrefix(infix);

    cout << "Infix: " << infix << endl;
    cout << "Prefix: " << prefix << endl;

    return 0;
}