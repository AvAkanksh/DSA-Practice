#include <iostream>
#include <algorithm>
using namespace std;

// Trapping Rain Water

int getWater(int arr[], int n)
{
    int water = 0;
    int rmax[n];
    int lmax[n];

    lmax[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        lmax[i] = max(arr[i], lmax[i - 1]);
    }
    rmax[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        rmax[i] = max(arr[i], rmax[i + 1]);
    }

    for(int i = 1; i < n-1; i++){
        water = water + min(rmax[i], lmax[i])-arr[i];
    }
    return water;
}

int main()
{
    int arr[] = {5,0,6,2,3};
    int n = 5;
    cout<<"The total water which can be stored according to the given heights is : "<<getWater(arr,n)<<endl;
    return 0;
}