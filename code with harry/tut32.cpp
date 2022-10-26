#include<bits/stdc++.h>

using namespace std;

class Complex{
    int a,b;
    public:
        Complex(int a1 = 0, int b1 = 0){
            a = a1;
            b = b1;
        }
        void printData(){
            cout<<a<<" "<<b<<endl;
        }
};

int main(){

    Complex c(3);
    c.printData() ;   

    return 0;
}