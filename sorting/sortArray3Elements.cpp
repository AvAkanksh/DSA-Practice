#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// Dutch National Flag Algorithm Implementation
// T(n) = O(n), number of traversals = 1; Aux space = O(1);

void swap(int arr[],int i , int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void dutchNationalFlag(int arr[], int n){
    int low = 0 ;
    int mid = 0 ;
    int high = n-1 ;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr,mid,low);
            mid++;
            low++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr,mid,high);
            high--;
        }
    }
}

int main(){

int arr[] = {1,0,1,2,0,2,1,0,1,2,1,1,2,0,0,2,2,1,2,1};
int n = sizeof(arr)/sizeof(arr[0]);
dutchNationalFlag(arr,n);
for(int i = 0 ; i<n; i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;

return 0 ;
}