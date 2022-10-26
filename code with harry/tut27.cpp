#include<iostream>
using namespace std;

class Complex{
    int a,b;
    friend class Calculator;
    public:
        void setData(int a1, int b1){
            a = a1;
            b = b1;
        }

        void getData(){
            cout<<"The complex number is : "<<a<<" + "<<b<<"i"<<endl;
        }
};


class Calculator{
    public:
        int addRealComplex(Complex o1,Complex o2){
            return o1.a + o2.a;
        }
        
        int addCompComplex(Complex o1,Complex o2){
            return o1.b + o2.b;
        }

        Complex addComplex(Complex o1, Complex o2){
            int x = addRealComplex(o1,o2);
            int y = addCompComplex(o1,o2);
            Complex o ;
            o.setData(x,y);
            return o; 
        }
};


int main(){
    Complex o1,o2;
    o1.setData(1,2);
    o1.getData();

    o2.setData(3,4);
    o2.getData();

    Calculator calc;
    Complex o = calc.addComplex(o1,o2);
    o.getData();

    return 0;
}