// https://youtu.be/nP_ns3uSh80?si=ygyyKEmOPTAeUNYM


// Given an array nums of size n, return the majority element.
// The majority element is the element that appears more than ⌊n / 2⌋ times. 
// You may assume that the majority element always exists in the array.

#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int>& nums) {
    int ele = nums[0];
    int count = 1;
    int n = nums.size();
    for(int i=1; i<n; i++){
        if(count==0){
            ele = nums[i];
            count=1;
        }
        else if(nums[i]==ele) count++;
        else{
            count--;
        }
    }
    // no need but check
    int c=0;
    for(auto i:nums){
        if(i==ele) c++;
    }
    if(c>(n/2)) return ele;
    return -1;

}
