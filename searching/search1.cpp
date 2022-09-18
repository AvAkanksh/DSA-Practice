#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Binary Search

int searchIndex(int arr[],  int key, int l, int h)
{
    int index = -1;
    int mid = (l + h) / 2;
    while (l > h)
    {
        return -1;
    }

    if (arr[mid] == key)
    {
        index = mid;
        return index;
    }

    else if (arr[mid] < key)
    {
        index = searchIndex(arr,  key, mid + 1, h);
    }
    else
    {
        index = searchIndex(arr,  key, l, mid - 1);
    }

    return index;
}

int main()
{

    int arr[] = {3, 4, 5, 6, 7, 8, 9};
    int n = 7;
    int key = 8;
    cout << "The index of the key value is : " << searchIndex(arr, key, 0, n - 1) << endl;
    return 0;
}