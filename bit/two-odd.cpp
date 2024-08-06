// given array of integers, find two numbers that appear odd number of times

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    int xorSum = 0;
    for(auto i:nums){
        xorSum^=i;
    }
    int mask = (xorSum&(xorSum-1))^xorSum;
    int a=0,b=0;
    for(auto i:nums){
        if(i&mask){
            a^=i;
        }else{
            b^=i;
        }
    }
    cout<<a<<" "<<b;
}