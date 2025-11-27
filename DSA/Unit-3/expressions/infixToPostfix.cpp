#include <iostream>
#include <stack>
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

// function to scan infix from left to right:
void infixToPostfix(const char infix[], char postfix[])
{

    stack<char> st; // store operator;
    int k = 0;      // index of postfix results
    int n = strlen(infix);

    // loop for traversal: left to right: for
    for (int i = 0; i < n; ++i)
    {
        char c = infix[i]; // hold current character which user will pass so that we can process on it:

        //  case 1: operand -> directly add to postfix:
        if (isOperator(c))
        {
            postfix[k++] = c;
        }

        // case 2: '(' -> push to stack to make it sub-expression:
        else if (c == '(')
        {
            st.push(c);
        }

        // case 3: encounter ')' -> pop operators untill '(' is found
        else if (c == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                postfix[k++] = st.top();
                st.pop(); // remove operator
            }
            st.pop(); // pop '(' but dont add it to the output
        }

        // case 4: operator -> pop it with highest precedence:

        else
        {
            while (!st.empty() && precedence(st.top()) >= precedence(c))
            {
                postfix[k++] = st.top();
                st.pop();
            }
            st.push(c); // pushing current operator
        }
    }

    // Pop remaining operators in the stack:
    while (!st.empty())
    {
        postfix[k++] = st.top();
        st.pop();
    }
    postfix[k] = '\0'; // terminating the postfix string
}

int main()
{
    char infix[50] = "A+B*C";
    char postfix[50];

    infixToPostfix(infix, postfix);

    cout << "Infix: " << infix << endl;
    cout << "Postfix: " << postfix << endl;

    return 0;
}