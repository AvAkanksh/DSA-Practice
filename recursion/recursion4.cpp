#include<iostream>
using namespace std;


void fun(int n){
    if(n ==0){
        return ;
    }
    fun(n/2);
    cout<<(n%2)<<endl;
}


int main(){
    fun(4);
    return 0;
}