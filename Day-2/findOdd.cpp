// Given an array of integers where each integer is repeated even number of times except one
// find that one number
// follow up : do in O(log n) if all the numbers are paired together with their dups
// but there will be now two conseuctive pairs of same number
// Ex : 1,1,2,2,3,3,1,1,2,4,4,5,5,3,3

#include<iostream>
#include<vector>
using namespace std;

// int main(){
//     int nums[11]= {1,2,3,1,2,3,4,4,5,4,4};
//     int result=0;
//     for(int i=0; i<11; i++){
//         result^=nums[i];
//     }
//     cout<<result;
// }

//follow up

int main(){
    int num[11] = {1,1,2,2,3,3,4,5,5,6,6};
    int left=0,right=10;
    
    while(left<right){
        int mid = (left+right)/2;
        if(mid%2==0){
            if(num[mid]==num[mid+1]){
                left = mid+2;
            }
            else{
                right = mid;
            }
        }
        else {
            // If mid is odd
            if (num[mid] == num[mid - 1]) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
    }
    cout<<num[left];
}