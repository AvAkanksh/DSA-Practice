#include<bits/stdc++.h>

using namespace std;

class Complex{
    int a ;
    int b ;
    public :
        Complex (int a1 , int b1){
            a = a1;
            b = b1;
        }

        void printNumber(){
            cout<<"The complex number is : "<<a<<" + "<<b<<"i"<<endl;
        }
};

int main(){

    Complex c(2,3);
    c.printNumber();

    return 0;
}