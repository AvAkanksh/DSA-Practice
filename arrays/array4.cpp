#include <iostream>
#include <algorithm>
using namespace std;

// Left Rotate the array by D elements

void leftRotation1(int arr[], int n, int d)
{
    cout << "\n\nMethod 1 ---> T(n) : O(n*d) , Auxilary Space : O(1)_" << endl;
    cout << "Before:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    for (int i = 0; i < d; i++)
    {
        int temp = arr[0];
        for (int j = 1; j < n; j++)
        {
            arr[j - 1] = arr[j];
        }
        arr[n - 1] = temp;
    }
    cout << "\n\nAfter Left Rotation:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

void leftRotation2(int arr[], int n, int d)
{
    cout << "\n\nMethod 2 ---> T(n) : O(n) , Auxilary Space : O(d)" << endl;
    cout << "Before:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }

    int temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }
    for (int j = d; j < n; j++)
    {
        arr[j - d] = arr[j];
    }
    for (int i = 0; i < d; i++)
    {
        arr[n-d+i] = temp[i];
    }

    cout << "\n\nAfter Left Rotation:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

void reverse_arr(int arr[],int start, int end){
    int temp ;
    while(start<end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void leftRotation3(int arr[], int n, int d)
{
    cout << "\n\nMethod 3 ---> T(n) : O(n) , Auxilary Space : O(1)" << endl;
    cout << "Before:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }

    reverse_arr(arr,0,d-1);
    reverse_arr(arr,d,n-1);
    reverse_arr(arr,0,n-1);

    cout << "\n\nAfter Left Rotation:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}


int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int d = 2;
    leftRotation1(arr, 7, d);
    leftRotation2(arr, 7, d);
    leftRotation3(arr, 7, d);
    return 0;
}