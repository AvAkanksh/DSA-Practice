#include<iostream>

using namespace std;

int main(){

//  Break statement
    for (int i = 0 ; i < 10 ; i++){
        cout<<i<<endl;
        if(i == 2){
            break;
        }
    }

    //  Continue statement
    for (int i = 0 ; i < 10 ; i++){
        if(i == 2){continue;}
        cout<<i<<endl;
    }
    return 0;
}