#include<bits/stdc++.h>

using namespace std;

void printNames(int count){
    if(count == 0){
        return;
    }
    cout<<"Hello World"<<endl;
    printNames(count-1);
}

void print1toN(int count){
    if(count==0){
        return ;
    }
    print1toN(count-1);
    cout<<count<<endl;
}

void printNto1(int count){
    if(count==0){
        return ;
    }
    cout<<count<<endl;
    printNto1(count-1);
}

int main(){

    printNames(5);
    cout << "-----------------" << endl;
    print1toN(10);
    cout << "-----------------" << endl;
    printNto1(10);

    return 0;
}