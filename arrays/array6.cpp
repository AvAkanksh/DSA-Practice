#include <iostream>
#include <algorithm>
using namespace std;

// find the frequecy of each element in a sorted array.

void frequencyCount(int arr[], int n)
{
    int freq = 1;
    int i = 1;
    while (i < n)
    {
        while (i < n && arr[i] == arr[i - 1])
        {
            freq++;
            i++;
        }
        cout << arr[i - 1] << " : " << freq << endl;
        i++;
        freq = 1;
    }
    if (n == 1 || arr[n - 1] != arr[n - 2])
    {
        cout << arr[n - 1] << " : 1" << endl;
    }
}

int main()
{

    int arr[] = {1, 1, 1, 2, 3, 3, 4, 5, 5, 5, 5, 5, 6, 7};
    int n = 14;

    frequencyCount(arr, n);
    return 0;
}