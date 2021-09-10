#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }
}
// Title of the Program

int main()
{

    int arr[] = {};
    int n = sizeof(arr) / sizeof(arr[0]);



    display(arr,n);
    return 0;
}