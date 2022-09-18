#include<iostream>
using namespace std;

// Sum of Digits using Recursion;
// T(n) = O(d) where d = number of digits in the given number.
// Auxilary Space = O(d)
int sumDigits(int n){
    if(n == 0){return 0;}
    return n%10 + sumDigits(n/10);
}

int main(){
    cout<<"Enter a string to find the sum of the digits in the given number :"<<endl;
    int n ;
    cin>>n;
    cout<<"The sum of the digits in "<<n<<" is : "<< sumDigits(n)<<endl;
    return 0;
}