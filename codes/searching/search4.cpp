#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Find the last occerance of the the key value mentioned.

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

int main()
{
    int arr[] = {1, 2, 3, 3, 3, 3, 3, 4};
    int n = 8;
    int key = 3;
    cout << "The last occerance of the key value in the array is : " << lastOccerances(arr, n, key) << endl;

    return 0;
}