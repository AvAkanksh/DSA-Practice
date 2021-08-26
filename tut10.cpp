#include <iostream>

using namespace std;

int main(){
    int n = 10;
    // For LOOP
    cout<<"FOR LOOP"<<endl;
    for (int i = 0 ; i < n ; i++){
        cout<<i<<endl;
    }
    // while LOOP
    cout<<"While LOOP"<<endl;
    int i = 0;
    while(i<n){
        cout<<i<<endl;
        i++;
    }
    // do while LOOP
    i = 0;
    cout<<"Do While LOOP"<<endl;
    do{
        cout<<i<<endl;
        i++;
    }while(i<n);


    return 0;
}