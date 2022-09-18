#include<iostream>
#include<algorithm>
using namespace std;

// Move Zeros to End

void moveZeros(int arr[],int n){
    int nonzero = 0;
    int temp;
    for (int i = 0 ; i <n; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    for(int i = 0 ; i < n ;i++){
        if(arr[i]!=0){
            temp = arr[nonzero];
            arr[nonzero] = arr[i];
            arr[i] = temp;
            nonzero++;
        }
    }
    cout<<nonzero<<endl;
    for (int i = 0 ; i <n; i++){
        cout<<arr[i]<<"\t";
    }
}

int main(){

int arr[] = {10,0,20,0,30,50,60};
moveZeros(arr,7);

return 0 ;
}