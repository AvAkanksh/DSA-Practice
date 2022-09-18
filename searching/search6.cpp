#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// Count the number of 1's in a sorted binary array.
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

int main(){

int arr[] = {0,0,0,0,0,1,1,1,1,1,1,1,1};
int n = 13;
cout<<"The count of 1's in the given sorted binary array is : "<<(n - firstOccerances(arr,n,1))<<endl;

return 0 ;
}