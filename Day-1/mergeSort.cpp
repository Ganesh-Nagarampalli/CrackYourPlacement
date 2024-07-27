#include<iostream>
using namespace std;

void merge(int a[], int low, int mid, int high){
    int temp[100];
    int i=low;
    int j=mid+1;
    int ind=0;
    while(i<=mid && j<=high){
        if(a[i]<=a[j]){
            temp[ind] = a[i];
            ind++;
            i++;
        }
        else{
            temp[ind] = a[j];
            ind++;
            j++;
        }
    }
    while(i<=mid){
        temp[ind] = a[i];
        ind++;
        i++;
    }
    while(j<=high){
        temp[ind] = a[j];
        ind++;
        j++;
    }

    for(int i=low; i<=high; i++){
        a[i] = temp[i - low];
    }


}

void mergeSort(int a[], int low, int high){
    if(low==high) return;
    int mid = (low+high)/2;
    mergeSort(a,low,mid);
    mergeSort(a,mid+1,high);
    merge(a,low,mid,high);
}

int main(){
    int n;
    cin>>n;
    int a[100];
    for(int i=0; i<n; i++){
        int ele;
        cin>>ele;
        a[i] = ele;
    }
    mergeSort(a,0,n-1);
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }

}