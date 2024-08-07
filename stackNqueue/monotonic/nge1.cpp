// Next greater element 1
// Monotonic stack means a stack which is either entirely non-increasing or non-decreasing.

// Question : Given an array, find the Next Greater Element (NGE) for every element.
// The Next greater Element for an element x is the first greater element on the right side of x in the array. Elements for which no greater element exist, consider the NGE as -1.

#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    stack<int> st;
    vector<int> ans(n);
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && st.top()<=a[i]) st.pop();
        ans[i] = st.empty()?-1:st.top();
        st.push(a[i]);
    }
    for(int i=0;i<n;i++) cout<<ans[i]<<" ";
    return 0;
}