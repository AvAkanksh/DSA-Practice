#include<iostream>
#include<algorithm>
using namespace std;

// Left Rotation

void leftRotation(int arr[],int n){
    int temp = arr[0];
    cout<<"Before: "<<endl;
    for (int i = 0 ; i <n; i++){
        cout<<arr[i]<<"\t";
    }
    for(int i = 1 ; i < n; i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    cout << "\n\nAfter Left Rotation:"<<endl;
    for (int i = 0 ; i <n; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;

}

int main(){

int arr[] = {1,2,3,4,5,6,7};

leftRotation(arr,7);

return 0 ;
}