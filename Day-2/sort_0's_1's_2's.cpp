// Dutch National Flag algo
// https://youtu.be/tp8JIuCXBaU?si=bnIFGja-oftYO9Hy
// given array of 0's 1's and 2's  sort them

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sort(vector<int>&nums){
    //intitution:
    // take 3 pointers low,mid,high
    // assume 0 to low-1  has 0's
    // low to mid-1 has 1's
    // mid to high unsorted
    // high+1 to end has 2's

    int low=0,mid=0,high=nums.size()-1;
    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[mid],nums[low]);
            low++;
            mid++;
        }
        else if(nums[mid]==1){
            mid++;
        }
        else{
            swap(nums[mid],nums[high]);
            high--;
        }
    }
}