#include<iostream>
using namespace std;

int factorial(int n){
    if(n == 0 ){
        return 1;
    }
    return n*factorial(n-1);
}

int fibonacci(int n){
    if(n<=1){
        return 1;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
    int number;
    cout<<"Enter the value for which you want to find the factorial : "<<endl;
    cin>>number;
    cout<<number<<"! = "<<factorial(number)<<endl;

    cout<<"fibonacci ("<<number<<") is : "<<fibonacci(number)<<endl;
    return 0;
}