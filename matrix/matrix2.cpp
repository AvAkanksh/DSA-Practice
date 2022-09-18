#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Title of the Program

void print(int **arr, int m , int n){
    for(int i = 0 ; i < m; i++){
        for(int j = 0 ; j < n ; j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
}

int main()
{
    // Pointer Practice
    // int *a;
    // int b = 10;
    // a = &b;
    // cout<<a<<endl;
    // cout<<&b<<endl;
    // cout<<b<<endl;
    // cout<< *(a) <<endl;

    int **arr;
    int m = 10,n = 10;
    arr = new int *[m];
    for(int i = 0 ; i <m; i++){
        arr[i] = new int [n];
        cout<<arr[i]<<endl;
        for(int j = 0; j < i+1;j++){
            arr[i][j] = i;
        }
    }

    print(arr,m,n);


    return 0;
}