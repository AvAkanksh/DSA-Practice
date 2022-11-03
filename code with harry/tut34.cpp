#include<bits/stdc++.h>

using namespace std;

class Number{
    int a;
    public:
        Number(){
        }
        Number(int num){
            a = num;
        }
        Number(Number &obj){
            cout<<"The copy Constructor is called!"<<endl;
            a = obj.a;
        }
        void show(){
            cout<<"The value of the number for this object is : "<<a <<endl;
        }
};

int main(){

    Number n1,n2,n3;
    n1 = Number(1);
    n1.show();
    n2 = Number(n1);
    n2.show();
    n3 = n1;
    n3.show();


    return 0;
}