#include <iostream>
#include<iomanip>
using namespace std;

int main(){
//  *****************This is to demonstrate the use of constant in c++*****************

    // int a  = 10;
    // cout<<"The value of a is "<<a<<endl;
    // a = 45;
    // cout<<"The value of a is "<<a<<endl;
// ************************************************************************************
    const int a = 10;
    cout<<"The value of a : "<<setw(10)<<a<<endl;
    // a = 20;
    // cout<<"The value of a : "<<a<<endl;
    return 0;
}