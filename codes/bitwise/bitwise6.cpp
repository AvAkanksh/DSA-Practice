#include<iostream>
using namespace std;

// Given an array on size n it have values form 1 - n+1 , each number occuring only once so find the number which is missing in the array

int main(){
    // int arr[] = {2,3,1,5,6,4,7,8};
    int arr[] = {2,3,1,5,4,7,8};
    int n = 7;
    int ans = 0;
    int i = 0;
    for ( ; i<n; i++){
        ans = ans^arr[i]^(i+1);
    }
    ans = ans^(i+1);
    cout<< "The missing number in the given array is : " <<ans<<endl;
    return 0;
}