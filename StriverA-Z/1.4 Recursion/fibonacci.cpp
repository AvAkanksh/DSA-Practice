#include <iostream>
#include <vector>

using namespace std;

int f(int n){
    if(n <=1){
        return n;
    }
    return f(n-1) + f(n-2);
}

int main()
{
    int n ;
    cout<<"Enter a number to find the fibonacci number at that location : ";
    cin >> n;
    cout<<"The "<<n<<"th element of Fibonacci Series is : "<<f(n)<<endl;

    return 0;
}