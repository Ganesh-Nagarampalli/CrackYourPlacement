// convert prefix expression to infix expression

/*
    Rules:
        1. Reverse the prefix expression.
        2. If operand, push it to stack.
        3. If operator, pop two operands from stack, concat top1+operator+top2 with brackets and push it to stack.
        4. At the end, the stack will have only one element which is the infix expression.
*/

#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

string prefixToInfix(string s){
    stack<string> st;
    reverse(s.begin(),s.end());
    for(auto i:s){
        if((i>='a' && i<='z') || (i>='A' && i<='Z')) st.push(string(1,i));
        else{
            string op1 = st.top();
            st.pop();
            string op2 = st.top();
            st.pop();
            st.push("("+op1+i+op2+")");
        }
    }
    return st.top();
}

int main(){
    string s;
    cin>>s;
    cout<<prefixToInfix(s);
    return 0;
}