#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Check if character is an operand
bool isOperand(char c)
{
    return (c >= 'A' && c <= 'Z');
}

// Convert postfix to infix
string postfixToInfix(const string &postfix)
{
    stack<string> s;
    for (char c : postfix)
    {
        if (isOperand(c))
        {
            string op(1, c); // Convert char to string
            s.push(op);
        }
        else
        {
            // Pop two operands
            string op2 = s.top();
            s.pop();
            string op1 = s.top();
            s.pop();

            // Form "(op1 operator op2)"
            string expr = "(" + op1 + c + op2 + ")";
            s.push(expr);
        }
    }
    return s.top();
}

int main()
{
    string postfix = "AB+C*";
    string infix = postfixToInfix(postfix);
    cout << "Infix: " << infix << endl;
    return 0;
}