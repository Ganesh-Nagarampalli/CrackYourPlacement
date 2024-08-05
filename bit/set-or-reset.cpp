// set the ith bit of a number to 1 or 0

#include<iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n>>i;
    int mask = 1<<i;
    n = n|mask;
    cout<<n<<endl;
    n = n&(~mask);
    cout<<n<<endl;
}

