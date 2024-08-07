// convert infix expression to prefix expression
/* Rules:
    1. Reverse the infix expression.
    2. Replace '(' with ')' and vice versa.
    3. Apply infix to postfix conversion. But use '<' precedence instead of '<='.
    4. Reverse the postfix expression.
*/
#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

int precedence(char c){
    if(c=='^') return 3;
    if(c=='*' || c=='/') return 2;
    if(c=='+' || c=='-') return 1;
    return -1;
}

string infixToPrefix(string s){
    stack<char> st;
    string res;
    for(auto i:s){
        if((i>='a' && i<='z') || (i>='A' && i<='Z')) res+=i;
        else if(i==')') st.push(i);
        else if(i=='('){
            while(!st.empty() && st.top()!=')'){
                res+=st.top();
                st.pop();
            }
            if(!st.empty()) st.pop();
        }
        else{
            while(!st.empty() && precedence(i)<precedence(st.top())){
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
    reverse(res.begin(),res.end());
    return res;
}

int main(){
    string s;
    cin>>s;
    reverse(s.begin(),s.end());
    for(int i=0;i<s.size();i++){
        if(s[i]=='(') s[i]=')';
        else if(s[i]==')') s[i]='(';
    }
    cout<<infixToPrefix(s);
    return 0;
}