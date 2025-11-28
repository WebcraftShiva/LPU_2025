	#include <iostream>
	#include <stack>
	#include <string>
	using namespace std;
	
	// Function to check if a character is an operand
	bool isOperand(char c) {
	    return (c >= 'A' && c <= 'Z');
	}
	
	// Function to convert postfix to prefix
	string postfixToPrefix(const string& postfix) {
	    stack<string> s;
	    for (char c : postfix) {
	        if (isOperand(c)) {
	            string op(1, c); // Convert char to string
	            s.push(op);
	        } else {
	            // Pop two operands from stack
	            string op2 = s.top(); s.pop();
	            string op1 = s.top(); s.pop();
	            // Concatenate operator + op1 + op2
	            string expr = c + op1 + op2;
	            s.push(expr);
	        }
	    }
	    return s.top();
	}
	
	int main() {
	    string postfix = "AB+CD-*";
	    string prefix = postfixToPrefix(postfix);
	    cout << "Prefix: " << prefix << endl;
	    return 0;
	}
