// convert postfix expression to infix expression

/*
    Rules:
        1. If operand, push it to stack.
        2. If operator, pop two operands from stack, concat top2+operator+top1 with brackets and push it to stack.
        3. At the end, the stack will have only one element which is the infix expression.
*/
#include<iostream>
#include<stack>
using namespace std;

string postfixToInfix(string s){
    stack<string> st;
    for(auto i:s){
        if((i>='a' && i<='z') || (i>='A' && i<='Z')) st.push(string(1,i));
        else{
            string op2 = st.top();
            st.pop();
            string op1 = st.top();
            st.pop();
            st.push("("+op1+i+op2+")");
        }
    }
    return st.top();
}

int main(){
    string s;
    cin>>s;
    cout<<postfixToInfix(s);
    return 0;
}