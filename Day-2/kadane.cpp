#include<iostream>
#include<vector>
using namespace std;

vector<int> maxSubarray(vector<int>&nums){
    int maxi=INT_MIN;
    int sumi=0;
    int start,ansStart,ansEnd;
    for(auto i:nums){
        if(sumi==0) start=i;
        sumi+=i;
        if(sumi>maxi){
            maxi=sumi;
            ansStart = start;
            ansEnd = i;
        }
        sumi = max(sumi,0);
    }
}