#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Binary Search iterative method

int getIndex(int arr[], int n, int key)
{

    int l = 0;
    int h = n - 1;
    int mid;

    while (l <= h)
    {
        mid = (l + h) / 2;
        if (arr[mid] == key)
        {
            return mid;
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

int main()
{
int arr[] = {0,1,2,3,4,5,6,7,8};
int n = 90;
int key = 5;

cout<<"The index of the key value is : "<<getIndex(arr,n,key)<<endl;
    return 0;
}