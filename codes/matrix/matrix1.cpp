#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Multidimesional Arrays in C++
// The matrix in c++ are stored in row major order
// 1. Elements are stored in row major;

// 10      ,20     ,30     ,40     ,50     ,60
// 2000    2004    2008    2012    2016    2020


void display1(int arr[][2],int m){
    for(int i=0;i<m;i++){
        for(int j=0;j<2;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
}

void display2(int **arr,int m , int n){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
}

int main()
{

    int arr0[2][3] = {{10,20,30},{40,50,60}};
    // int n = sizeof(arr) / sizeof(arr[0]);
    int arr2[][3] = {{10,20,30},{40,50,60}};
    int arr3[][2] = {{10,20},{30,40},{50,60}};
    int **arr4;
    int m = 3, n = 2;
    arr4= new in    t *[]
    display1(arr3,3);
    return 0;
}