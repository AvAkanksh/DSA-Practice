#include<bits/stdc++.h>

using namespace std;

int printFibonacci(int n){
    if(n<=1){
        return n;
    }
    int last= printFibonacci(n-1);
    int secondLast = printFibonacci(n-2);
    return last +secondLast;
}

int main(){
    for(int i = 0 ; i<=10;i++){
        cout<<printFibonacci(i)<<endl;
    }
    return 0;
}