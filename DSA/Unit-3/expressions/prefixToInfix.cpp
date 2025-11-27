#include <iostream>
#include <stack>
#include <algorithm> // for using reverse function
#include <cstring>
using namespace std;

// function for operator priority:
int precedence(char x)
{
    if (x == '^')
        return 3;

    if (x == '*' || x == '/')
        return 2;

    if (x == '+' || x == '-')
        return 1;

    return 0; // no operator is there out of tthese
}

// check weather our character is letter or digit
bool isOperator(char x)
{

    return (x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z') || (x >= '0' && x <= '9');
}

// convert Prefix to infix:
void prefixToInfix(const char prefix[], char infix[])
{

    stack<string> st;
    int n = strlen(prefix);

    // scanning prefix expression:
    for (int i = n - 1; i >= 0; i--)
    {
        char c = prefix[i]; // if it is operand push string to the stack:

        if (isOperator(c))
        {
            st.push(string(1, c));
        }
        else
        {
            // pop two operands from the stack
            string st1 = st.top();
            st.pop();

            string st2 = st.top();
            st.pop();

            // build new infix expression with paranthesis:

            string expression = '(' + st1 + c + st2 + ")";
            st.push(expression);
        }
    }

    // final expression will remain on the top of the stack:
    strcpy(infix, st.top().c_str());
}

int main()
{

    char prefix[] = "*+AB-CD";

    char infix[50];

    prefixToInfix(prefix, infix);

    cout << "Prefix:" << prefix << endl;
    cout << "Infix:" << infix;
    return 0;
}