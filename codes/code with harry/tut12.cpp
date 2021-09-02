#include<iostream>
using namespace std;

int main(){
    // int a = 3;
    //  what is a pinter ? ----> data type which holds the address of the
    int a = 3;
    int* b = &a;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"*b = "<<*b<<endl;
    int** c;
    c = &b;
    cout<<"c = "<<c<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"&b = "<<&b<<endl;
    cout<<"*c = "<<*c<<endl;
    cout<<"**c = "<<**c<<endl;

    return 0;
}