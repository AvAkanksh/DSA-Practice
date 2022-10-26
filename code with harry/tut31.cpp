#include<bits/stdc++.h>

using namespace std;
// Constructor Overloading
class Complex{
    int a, b;
    public:
        Complex(){
            a = 0;
            b = 0;
        }
        Complex(int x){
            a = x;
            b = 0;
        }
        Complex(int x, int y){
            a = x;
            b = y;
        }

        void printNumber(){
            cout<<"The complex number is : "<<a<<" + "<<b<<"i"<<endl;
        }

};

int main(){
    Complex c1;
    Complex c2(3);
    Complex c3(4,7);

    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    

    return 0;
}