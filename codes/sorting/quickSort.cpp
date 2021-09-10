#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// Title of the Program
void swap(int arr[], int i , int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}


int partition(int arr[],int l , int h){
    int pivot = arr[h]; // always last element
    int i = l;
    for (int j = l; j <h; j++){
        if(arr[j]<pivot){
            swap(arr,i,j);
            i++;
        }
    }
    swap(arr,i,h);
    return i;
}


void quickSort(int arr[], int l , int h){
    if(l<h){
        int p = partition(arr,l,h);
        quickSort(arr,l,p-1);
        quickSort(arr,p+1,h);
    }
}


int main(){
int arr[] = {3,2,6,7,4,1};
int n = 6;
quickSort(arr,0,5);
for(int i = 0 ; i < n; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

return 0 ;
}