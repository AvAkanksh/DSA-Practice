#include<bits/stdc++.h>

using namespace std;

void sumParameterized(int n, int sum){
    if(n<1){
        cout<<sum<<endl;
        return;
    }
    sumParameterized(n-1,sum+n);
}

int sumFunctional(int n){
    if(n==0){
        return 0;
    }
    return n+sumFunctional(n-1);
}

int main(){

    sumParameterized(10,0);
    cout<<sumFunctional(10)<<endl;;

    return 0;
}