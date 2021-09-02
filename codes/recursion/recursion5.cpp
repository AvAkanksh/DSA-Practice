#include<iostream>
using namespace std;

// T(n) = O(n) and S(n)=O(n) : Auxilary Space Complexity

int getsum(int n ){
    if(n==1){return 1;}
    return n+ getsum(n-1);
}


int main(){
    cout<<getsum(10)<<endl;
    return 0;
}