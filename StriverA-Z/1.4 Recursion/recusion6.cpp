#include <iostream>
#include <vector>

using namespace std;

void reverseArray(int i , int arr[] , int n){
    if(i>=n/2){
        return;
    }
    swap(arr[i], arr[n-i-1]);
    reverseArray(i+1,arr,n);
}

int main()
{
    int arr1[] = {1,2,3,4,5,6};
    int arr[] = {1,2,3,4,5};
    int n1 = 6;
    int n = 5;
    for(auto i : arr){cout<<i<<" ";}
    cout<<endl;
    reverseArray(0,arr,n);
    for(auto i : arr){cout<<i<<" ";}
    cout<<endl;

    return 0;
}