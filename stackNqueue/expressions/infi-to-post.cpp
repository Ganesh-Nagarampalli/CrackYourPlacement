// convert infix expression to postfix expression

#include<iostream>
#include<stack>
using namespace std;

int precedence(char c){
    if(c=='^') return 3;
    if(c=='*' || c=='/') return 2;
    if(c=='+' || c=='-') return 1;
    return -1;
}

string infixToPostfix(string s){
    stack<char> st;
    string res;
    for(auto i:s){
        if((i>='a' && i<='z') || (i>='A' && i<='Z')) res+=i;
        else if(i=='(') st.push(i);
        else if(i==')'){
            while(!st.empty() && st.top()!='('){
                res+=st.top();
                st.pop();
            }
            if(!st.empty()) st.pop();
        }
        else{
            while(!st.empty() && precedence(i)<=precedence(st.top())){
                res+=st.top();
                st.pop();
            }
            st.push(i);
        }
    }
    while(!st.empty()){
        res+=st.top();
        st.pop();
    }
    return res;
}

int main(){
    string s;
    cin>>s;
    cout<<infixToPostfix(s);
    return 0;
}