// next greater element 2

// Question : Given an array, find the Next Greater Element (NGE) for every element.

// The Next greater Element for an element x is the first greater element on the right side of x in the array check circularly.
// Elements for which no greater element exist, consider the NGE as -1.
// use copy of array and append it to the end of the array and then apply the same logic as nge1
// or just play with the index by using % operator

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
    for(int i=2*n-1;i>=0;i--){
        while(!st.empty() && st.top()<=a[i%n]) st.pop();
        ans[i%n] = st.empty()?-1:st.top();
        st.push(a[i%n]);
    }
    for(int i=0;i<n;i++) cout<<ans[i]<<" ";
    return 0;
}


