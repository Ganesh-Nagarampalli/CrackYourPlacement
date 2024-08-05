// number of set bits in a number

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count = 0;
    while(n){ // till n is not 0
        n = n&(n-1); // remove the rightmost set bit
        count++;
    }
    cout<<count<<endl;
}

// number of flips required to convert a to b

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int n = a^b;
    int count = 0;
    while(n){ // till n is not 0
        n = n&(n-1); // remove the rightmost set bit
        count++;

        // or
        // if(n&1){
        //     count++;
        // }
        // n = n>>1;
    }
    cout<<count<<endl;
}