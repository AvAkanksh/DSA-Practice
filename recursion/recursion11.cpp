#include<iostream>
#include<algorithm>
using namespace std;

void towerOfHanoi(int n ,string A = "A", string B = "B",string C = "C"){
    if(n == 1){
        cout<<"Move the disc 1 from "<<A<<" to "<< C<<endl;
        return;
    }
    towerOfHanoi(n-1,A,C,B);
    cout<<"Move the Disc "<<n<<" from "<<A<<" to "<<C<<endl;
    towerOfHanoi(n-1,B,A,C);

}

int main(){

int n;
cout<<"Enter the number of discs in the tower of Hanoi problem: "<<endl;
cin>>n;
towerOfHanoi(n);
return 0 ;
}