// Divide and conquer algorithm


#include<iostream>
#include<vector>

using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;

}
int partition(vector<int>&v, int low, int high){
    // Taking first element as pivot
    int pivot = v[low];
    int i=low;
    int j=high;
    // when i and j cross each other that means
    // everything in the left is smaller than pivot
    // and in the right is greater than pivot
    while(i<j){
        while(pivot>=v[i] && i<=high-1) i++; // pivot<=v[i]
        while(pivot<v[j] && j>=low+1) j--;   // pivot>v[j]  to sort in descending order
        if(i<j) swap(&v[i],&v[j]);
    }
    swap(&v[low],&v[j]);
    return j;
}

void quickSort(vector<int>&v, int low, int high){

    // Perform only when low<high since low=high means 
    // only one element which is need not to be sorted
    if(low<high){
        int partitionIndex = partition(v,low,high);
        quickSort(v,low,partitionIndex-1);
        quickSort(v,partitionIndex+1,high);
    }
}

int main(){
    int n;
    vector<int>v;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    quickSort(v,0,n-1);
    for(auto i:v) cout<<i<<" ";
    cout<<endl;
}