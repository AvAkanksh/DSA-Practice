#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Find the index of the key element in a Infinitly sorted array

int searchIndex(int arr[], int key, int l, int h)
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
        index = searchIndex(arr, key, mid + 1, h);
    }
    else
    {
        index = searchIndex(arr, key, l, mid - 1);
    }

    return index;
}

int findIndex(int arr[], int key)
{
    if (arr[0] == key)
    {
        return 0;
    }
    int i = 1;
    // cout<<"\n"<<key<<endl;
    while (arr[i] <= key)
    {
    // cout<<"\n"<<i<<endl;

        if (arr[i] == key)
        {
            return i;
        }
        i = i * 2;
    }
    return searchIndex(arr, key, i / 2, i - 1);
}

int main()
{
    int arr[] = {0,1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33};
    int key = 32 ;
    cout << "The index of the key value is :" << findIndex(arr, key) << endl;

    return 0;
}