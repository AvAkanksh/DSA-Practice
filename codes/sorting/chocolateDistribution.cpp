#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Chocolate Distribution Problem

int minMaxDiff(int arr[],int n,int k)
{
sort(arr,arr+n);
int res = arr[k-1]-arr[0];

// cout<<res<<endl;
for(int i = 1 ; i<(n-k+1);i++){
res = min(res,arr[i+k-1]-arr[i]);
// cout<<res<<endl;
}
return res;
}

int main()
{

    // int arr[] = {12, 3, 1, 70, 8, 6, 5, 9, 20, 34, 53, 11};
    int arr[] = {1,90,20,60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
    cout << n << endl;
    cout<<"The min of the maximum difference between the distribution is : "<<minMaxDiff(arr,n,k)<<endl;
    for(int i = 0 ; i<n;i++){
        cout<<arr[i]<< " ";
    }
    return 0;
}