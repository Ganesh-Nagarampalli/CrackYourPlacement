// Given dividend and divisor, return the quotient without using the division operator.

#include<iostream>
using namespace std;

int main(){
    int dividend,divisor;
    cin>>dividend>>divisor;
    int sign = (dividend<0)^(divisor<0)?-1:1;
    dividend = abs(dividend);
    divisor = abs(divisor);
    int quotient = 0;
    while(dividend>=divisor){
        dividend-=divisor;
        quotient++;
    }
    cout<<sign*quotient;
    return 0;
}

// Time Complexity: O(dividend/divisor)

// using bit manipulation

#include<iostream>
using namespace std;

int main(){
    int dividend,divisor;
    cin>>dividend>>divisor;
    int sign = (dividend<0)^(divisor<0)?-1:1;
    dividend = abs(dividend);
    divisor = abs(divisor);
    int quotient = 0;
    while(dividend>=divisor){
        int x = 0;
        while(dividend>=(divisor<<x)){
            x++;
        }
        x--;
        quotient+=1<<x;
        dividend-=divisor<<x;
    }
    cout<<sign*quotient;
    return 0;
}