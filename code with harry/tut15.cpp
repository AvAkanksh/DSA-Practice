#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;
}

void greet();

int main(){
    int num1,num2;
    cout<<"Enter first number : "<<endl;
    cin>>num1;
    cout<<"Enter second number : "<<endl;
    cin>>num2;
    cout<<"The sum is : "<<sum(num1,num2)<<endl;

    greet();
    return 0;
}



void greet(){
    cout<<"Hello Good Morning!"<<endl;
}