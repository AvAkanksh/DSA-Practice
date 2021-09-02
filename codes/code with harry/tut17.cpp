#include<iostream>
using namespace std;
//  We use the inline function in order to replace
// the actual calling of the function with the function
//  itself it is useful when the function is small , not
// to be used when the function is very large the memory
// will go out of cache.

inline int product(int a , int b){
    return a*b;
}

int main(){
    int a, b, c, d;
    cout<<"Enter a value for a: "<<endl;
    cin>>a;
    cout<<"Enter a value for b: "<<endl;
    cin>>b;
    cout<<"The product of a and b is : "<<product(a,b)<<endl;
}