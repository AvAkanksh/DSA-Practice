#include<bits/stdc++.h>

using namespace std;

class Y;

class X{
    int data;
    public:
        void setValue(int value){
            data = value;
        }
        void display(){
            cout<<"The value of x is "<<data<<endl;
        }
        friend void exchange(X& , Y&);
        friend void add(X,Y);
};

class Y{
    int data;
    public:
        void setValue(int value){
            data = value;
        }
        void display(){
            cout<<"The value of y is "<<data<<endl;
        }
        friend void exchange(X& , Y&);
        friend void add(X,Y);
};

void add(X x, Y y){
    cout<<"Adding the data value of both X and Y objects gives us : "<<x.data + y.data<<endl;
}

void exchange(X &x, Y &y){
    int temp = x.data;
    x.data = y.data;
    y.data = temp;
}

int main(){

    X x;
    Y y;
    x.setValue(1);
    y.setValue(3);
    add(x,y);   
    cout<<"Before Exchange :"<<endl;
    x.display();
    y.display();
    exchange(x,y);
    cout<<"After Exchange :"<<endl;
    x.display();
    y.display();
    return 0;
}