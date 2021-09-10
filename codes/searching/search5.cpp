#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// Find the occance of the key value.
int firstOccerances(int arr[], int n, int key)
{
    int l = 0;
    int h = n - 1;
    int mid;

    while (l <= h)
    {
        mid = (l+h)/2;
        if (arr[mid] == key)
        {
            if (mid == 0)
            {
                return 0;
            }
            if (arr[mid] == arr[mid - 1])
            {
                h = mid - 1;
            }
            else
            {
                return mid;
            }
        }
        else if (arr[mid] < key)
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
    return -1;
}

int lastOccerances(int arr[], int n, int key)
{
    int l = 0;
    int h = n - 1;
    int mid;

    while (l <= h)
    {
        mid = (l+h)/2;
        if (arr[mid] == key)
        {
            if (mid == n-1)
            {
                return mid;
            }
            if (arr[mid] == arr[mid + 1])
            {
                l = mid + 1;
            }
            else
            {
                return mid;
            }
        }
        else if (arr[mid] < key)
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
    return -1;
}

int frequencyCount(int arr[], int n , int key){
    int first = firstOccerances(arr,n,key);
    if(first == -1){
        return 0 ;
    }
    else{
        return (lastOccerances(arr,n,key)-first+1);
    }
}

int main(){
int arr[] = {1,2,3,5,5,5,5,5,6};
int n = 9;
int key = 5;
cout<<"The occerance of the key is : "<<frequencyCount(arr,n, key)<<endl;

return 0 ;
}