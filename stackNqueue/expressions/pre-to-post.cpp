#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

// Function to check if the character is an operator
bool isOperator(char x) {
    return (x == '+' || x == '-' || x == '*' || x == '/');
}

// Function to convert prefix to postfix
string prefixToPostfix(string s) {
    stack<string> st;
    
    // Reverse the prefix expression to process it from right to left
    reverse(s.begin(), s.end());
    
    // Traverse through the reversed expression
    for (char i : s) {
        // If the current character is an operand, push it to the stack
        if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z')) {
            st.push(string(1, i));
        }
        // If the current character is an operator
        else if (isOperator(i)) {
            // Pop two operands from the stack
            string op1 = st.top();
            st.pop();
            string op2 = st.top();
            st.pop();
            
            // Form a new string with the operator after the two operands
            string newExp = op1 + op2 + i;
            
            // Push the new expression back to the stack
            st.push(newExp);
        }
    }
    
    // The final element in the stack is the resulting postfix expression
    return st.top();
}

int main() {
    string s;
    cout << "Enter a prefix expression: ";
    cin >> s;
    cout << "Postfix expression: " << prefixToPostfix(s) << endl;
    return 0;
}
