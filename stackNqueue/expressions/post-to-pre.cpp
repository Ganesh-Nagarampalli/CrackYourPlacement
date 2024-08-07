// convert postfix expression to prefix expression

/*
    Rules:
        1. If operand, push it to stack.
        2. If operator, pop two operands from stack, concat operator+top2+top1 and  push it to stack.
        3. At the end, the stack will have only one element which is the prefix expression.
*/

#include<iostream>
#include<stack>
using namespace std;

string postfixToPrefix(string s){
    stack<string> st;
    for(auto i:s){
        if((i>='a' && i<='z') || (i>='A' && i<='Z')) st.push(string(1,i));
        else{
            string op2 = st.top();
            st.pop();
            string op1 = st.top();
            st.pop();
            st.push(i+op2+op1);
        }
    }
    return st.top();
}

int main(){
    string s;
    cin>>s;
    cout<<postfixToPrefix(s);
    return 0;
}