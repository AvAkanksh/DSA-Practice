#include<iostream>
using namespace std;


void printDivisors(int n){
    int i ;
    for (i = 1;i*i<n;i++){
        if(n%i == 0){
            cout<<i<<endl;
        }
    }
    for (; i >=1 ; i--){
        if(n%i == 0){
            cout<<n/i<<endl;
        }
    }
}

int main(){
    int n;
    cout<<"Enter a number to find its divisors: "<<endl;
    cin>>n;
    printDivisors(n);
}