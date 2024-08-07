#include<iostream>
#include<stack>
using namespace std;

bool isValid(string s) {
    stack<char> st;
    for(auto i:s){
        if(i=='(' || i=='{' || i=='[') st.push(i);
        else{
            if(st.empty()) return false;
            if(i==')' && st.top()!='(') return false;
            if(i=='}' && st.top()!='{') return false;
            if(i==']' && st.top()!='[') return false;
            st.pop();
        }
    }
    return st.empty();
}

int main(){
    string s;
    cin>>s;
    cout<<isValid(s);
    return 0;
}