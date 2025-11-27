#include <iostream>
#include <cstring>
#include <stack>
using namespace std;

// function precedence: decide for precedence thing: ^ ---> return 3, *,/--> return 2, +,- ---> return 1,   return 0;
int precedence(char x)
{
    if (x == '^')
        return 3;
    if (x == '*' || x == '/')
        return 2;
    if (x == '+' || x == '-')
        return 1;

    return 0;
}

// function:isOperand --> char: letter or digit
bool isOperand(char x)
{
    return (x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z') || (x >= '0' && x <= '9');
}

// function(infixToPrefix) to scan infix expression from left to right:
void infixToPrefix(const char infix[], char postfix[])
{
    stack<char> st; // store operators
    int k = 0;      // we wont to store the index of our postfix result
    int n = strlen(infix);

    // create a loop for traversal from left to right:
    for (int i = 0; i < n; ++i)
    {
        char c = infix[i]; // current character being processed

        // case 1: if we get operator -> we will directly add it to the postfix:
        if (isOperand(c))
        {
            postfix[k++] = c;
        }

        // case 2: '(' -> push to the stack to mark start of the sub-expression.
        else if (c == '(')
        {
            st.push(c);
        }

        // case 3: encounter ')' -> pop untill we incounter '(':
        else if (c == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                postfix[k++] = st.top();
                st.pop(); // removing operator
            }
            st.pop(); // pop: ')', but dont add it to stack
        }

        // case 4: operator-> pop operator as per precedence base:
        else
        {
            while (!st.empty() && precedence(st.top()) >= precedence(c))
            {
                postfix[k++] = st.top();
                st.pop();
            }
            st.push(c); // pushing current operators
        }
    }

    // pop remaining operators in our stack
    while (!st.empty())
    {
        postfix[k++] = st.top();
        st.pop();
    }
    postfix[k] = '\0'; // terminating postfix string
}

int main()
{
    char infix[50] = "A+B*C";

    char postfix[50];

    infixToPrefix(infix, postfix);
    cout << "Infix: " << infix << endl;
    cout << "Postfix: " << postfix << endl;
    return 0;
}