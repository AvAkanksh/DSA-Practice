#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Title of the Program

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int l, int h)
{
    int pivot = arr[h];
    int i = l;
    for (int j = l; j < h; j++)
    {
        if (arr[j] < pivot)
        {
            swap(arr, i, j);
            i++;
        }
    }
    swap(arr, i, h);
    return i;
}

void quickSort(int arr[], int l, int h)
{
    int p;
    if(l<h){
    p = partition(arr, l, h);
    quickSort(arr, l, p - 1);
    quickSort(arr, p + 1, h);
    }
}

int kthSmallestNumber(int arr[],int l,int h,int k){
    int p;
    while(l<h){
        p = partition(arr,l,h);
        if(k==p){
            return arr[p];
        }
        if(p<k){
            l = p+1;
        }
        else{
            h = p-1;
        }
    }
    return -1;
}

int main()
{

    int arr[] = {30, 1, 82, 11, 3, 9, 15, 35, 16, 25, 7, 8};
    int n = 12;
    int k = 10;
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
    cout<<endl;
    cout<<kthSmallestNumber(arr,0,n-1,k-1)<<endl;

    return 0;
}