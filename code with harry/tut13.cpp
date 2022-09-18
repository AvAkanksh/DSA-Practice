#include <iostream>
using namespace std;

int main(){
    // Arrays:
    int marks[4] = {10,10,0,5};
    for (int i = 0 ; i <4; i++) {
        cout<<marks[i]<<endl;
    }
    // Pointers and Arrays:
    int* p = marks;
    for(int i = 0 ; i < 4; i++){
        cout<<"value :"<<*(p+i)<<endl;
        cout<<"Address :"<<(p+i)<<endl;
        cout<<"888888888888 "<<endl;
    }

    return 0;
}