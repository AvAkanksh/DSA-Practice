#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Find the first occerance of the the key value mentioned.

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

int main()
{
    int arr[] = {1, 2, 3, 3, 3, 3, 3, 4};
    int n = 8;
    int key = 3;
    cout << "The first occerance of the key value in the array is : " << firstOccerances(arr, n, key) << endl;

    return 0;
}