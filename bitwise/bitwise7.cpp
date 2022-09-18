#include<iostream>
using namespace std;


// find two odd appearing number;

int main(){
    int arr[] = {1,1,2,2,3,3,4,5,6,7,6,7,8,8};
    int n = 14;
    int i ;
    int xor_number=0 ;
    int sn;
    for (i = 0 ; i <n ; i++){
        xor_number=xor_number^arr[i];
    }

    sn = ((xor_number )& (~(xor_number-1)));
    int res1 = 0;
    int res2 = 0;
    for (i = 0 ; i < n ; i++){
        if(arr[i]&sn != 0){
            res1 = res1^arr[i];
        }
        else{
            res2 = res2^arr[i];
        }
    }
    cout<<res1<<endl;
    cout<<res2<<endl;

    return 0;
}