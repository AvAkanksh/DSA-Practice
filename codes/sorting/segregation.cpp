#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// Title of the Program
// Naive Solution T(n) = O(3n)
void swap(int arr[],int i , int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}


void segregationNegPos(int arr[],int n){

int temp[n];
int i = 0 ;

for(int j = 0 ;j<n;j++){
    if(arr[j]<0){
        temp[i]=arr[j];
        i++;
    }
}
for(int j = 0 ; j<n;j++){
    if(arr[j]>0){
        temp[i]=arr[j];
        i++;
    }
}

for(int j = 0 ; j<n;j++){
    arr[j] = temp[j];
}

}


void hoareSegregatition(int arr[],int n){
    int i = 0 ;
    int j = n-1;
    while(true){
        while(arr[i]<0){
            i++;
        }
        while(arr[j]>0){
            j--;
        }
        if(i>=j){
            break;
        }
        swap(arr,i,j);
    }

}

int main(){

int arr[] = {-1,2,3,-4,5,6,-7,8,-3};
int n = sizeof(arr)/sizeof(arr[0]);

// segregationNegPos(arr,n);
hoareSegregatition(arr,n);

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}


return 0 ;
}