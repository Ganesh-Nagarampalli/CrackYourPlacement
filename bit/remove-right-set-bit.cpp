// remove or clear the rightmost set bit of a number

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    n = n&(n-1);
    cout<<n<<endl;
}

// use the above logic to count the number of set bits in a number

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count = 0;
    while(n){
        n = n&(n-1);
        count++;
    }
    cout<<count<<endl;
}

// use the above logic to check if a number is power of 2

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n && !(n&(n-1))){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}

// set the rightmost 0 bit of a number

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    n = n|(n+1);
    cout<<n<<endl;
}