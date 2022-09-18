#include<iostream>
using namespace std;

//Naive Approach
int countSetBits(int n){
    int res = 0;
    while(n>0){
        if(n&1==1){
            res++;
        }
        n=n>>1;
    }
    return res;
}

//Brian Kerningam's Algorithm
int countSetBits2(int n){
    int res = 0;

    while(n>0){
        n = ((n)&(n-1));
        res++;
    }
    return res;
}

// Count Set Bits
int main(){
    int n ;
    cout<<"Enter a number to check now many set bits are there in its binary representation: "<<endl;
    cin>>n;
    cout<<"The number of set bits are : "<<countSetBits(n)<<endl;
    return 0;
}