// #include<iostream>
// using namespace std;

// typedef struct employee{
//     int eID = 100;
//     char favChar = 'a';
//     float salary = 1000;
// } ep;


// int main(){
//     struct employee akki;
//     ep akanksh;
//     akanksh.eID =1000;
//     akanksh.favChar = 'a';
//     akanksh.salary = 10000;
//     cout<<akanksh.eID<<endl;
//     cout<<akanksh.favChar<<endl;
//     cout<<akanksh.salary<<endl;
//     akki.salary = 90;
//     cout<<akki.eID<<endl;
//     cout<<akki.favChar<<endl;
//     cout<<akki.salary<<endl;
//     return 0;
// }


#include <iostream>
using namespace std;

typedef class Employee{

    private:
        int a,b,c;
    public:
        int d ,e;

        void set(int a,int b,int c){

        }
        void getData(){
            cout<<"The value of a is : "<<a<<endl;
            cout<<"The value of b is : "<<b<<endl;
            cout<<"The value of c is : "<<c<<endl;
            cout<<"The value of d is : "<<d<<endl;
            cout<<"The value of e is : "<<e<<endl;
        }
        void setData(int a1,int b1, int c1){
            a = a1;
            b = b1;
            c = c1;
        }
        void greet();

}ep;

void Employee :: greet(){
    cout<<"Hello Friends, Bagunara Friends, Bye Friends"<<endl;

}


int main(){
    ep akanksh;
    akanksh.d = 2;
    akanksh.e = 20;
    akanksh.setData(1,2,3);
    akanksh.getData();
    akanksh.greet();
    return 0;
}