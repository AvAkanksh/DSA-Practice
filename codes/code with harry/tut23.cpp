#include<iostream>
using namespace std;


class student{
    int c = 13;
    // int d = 12;
    public:
    int a = 10;
    int b = 20;
    void print(){
        cout<<&c<<endl;
        // cout<<&d<<endl;
    }
};

int main(){
    student akanksh,akanksh2;
    // cout<<&akanksh.c<<endl;
    // cout<<&akanksh2.c<<endl;
    akanksh.print();
    akanksh2.print();
    return 0;
}