#include<iostream>
#include<algorithm>
using namespace std;


int main(){
    int a, b, c;
    cout<<"Enter 3 numbers for a, b, and c to find the maximum of the 3 element"<<endl;
    cin>> a >> b >> c;

    int m = max({a,b,c});
    cout<<"The max element among the given set of number is : "<<m<<endl;
    return 0;
}