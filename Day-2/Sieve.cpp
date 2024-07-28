#include<iostream>
#include<vector>
using namespace std;

void sieve(int n){
    vector<int>prime(n+1,1);

    // TC : O(n log(log n))
    for(int i=2; i*i<=n; i++){
        if(prime[i]){
            for(int j=i*i; j<=n; j+=i){
                prime[j]=0;
            }
        }
    }
    for(int i=2; i<=n; i++){
        if(prime[i]) cout<<i<<" ";
    }

}

int main(){
    int n;
    cin>>n;
    sieve(n);
    return 0;
}