#include<iostream>
using namespace std;


int c  = 45;

int main(){
    // int a,b,c;
    // cout<<"Enter a number for a:";
    // cin>>a;
    // cout<<"Enter a number for b:";
    // cin>>b;
    // c = a+b;
    // cout<<"a: "<<a<<endl;
    // cout<<"b: "<<b<<endl;
    // cout<<"a+b=c= "<<c<<endl;
    // cout<<"Global value for c is : "<<::c<<endl;
    // return 0;
    // int a , b, c;
    // cin>>a>>b>>c;
    // cin>>b;
    // cin>>c;
    // cout<<"a : "<<a<<endl;
    // cout<<"b : "<<b<<endl;
    // cout<<"c : "<<c<<endl;


    // *********Float , double , int, long double**********
    // float d = 43.6f;
    // long double e = 34.4l;
    // int a = 10;
    // cout<<a+d+e<<endl;

    // **** Reference Variable*****

    cout<<"\n\nfloat x = 10.0;\nfloat y = x;";
    float x = 10.0;
    float y = x;
    cout<<&x<<endl;
    cout<<&y<<endl;
    cout<<x<<endl;
    cout<<y<<endl;
    y = 1;
    cout<<&x<<endl;
    cout<<&y<<endl;
    cout<<x<<endl;
    cout<<y<<endl;

    cout<<"\n\nfloat x = 10.0;\nfloat &y = x;";
    float a = 10.0;
    float &b = a;
    cout<<&a<<endl;
    cout<<&b<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    b = 1;
    cout<<&a<<endl;
    cout<<&b<<endl;
    cout<<a<<endl;
    cout<<b<<endl;



    return 0;
}