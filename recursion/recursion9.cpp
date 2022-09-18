#include<iostream>
#include<algorithm>
using namespace std;


// find the maximum number of pieces the rope can be cut into by only using the sizes mentioned.

int maxPieces(int n, int a , int b, int c){
    if(n==0){return 0;}

    if(n<0){return -1;}

    int ans = max({maxPieces(n-a,a,b,c) , maxPieces(n-b,a,b,c) , maxPieces(n-c,a,b,c)});
    if(ans == -1){return -1;}

    return ans +1;

}


int main(){
    int rope_length,a,b,c;
    cout<<"Enter a the lenght of the rope : "<<endl;
    cin>>rope_length;
    cout<<"Enter a value for a : "<<endl;
    cin>>a;
    cout<<"Enter a value for b : "<<endl;
    cin>>b;
    cout<<"Enter a value for c : "<<endl;
    cin>>c;

    cout<<"The maximum number of pieces which the string can be cut into is : "<<maxPieces(rope_length,a,b,c)<<endl;

    return 0;
}