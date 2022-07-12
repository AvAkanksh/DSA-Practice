#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Title of the Program

const int R = 5;
const int C = 5;

void print(int arr[R][C]){
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
}

// void swap(int arr[R][C],int i1,int j1,int i2,int j2){
//     int temp = arr[i1][j1];
//     arr[i1][j1] = arr[i2][j2];
//     arr[i2][j2] = temp;
// }

// void swap(int arr[a][b],int arr[b][a]){
//     int temp = a[];
//     a = b;
//     b = temp;
// }

void transpose(int arr[R][C]){
    for(int i = 0 ; i < R; i++){
        for(int j = i+1 ; j < C; j++){
            // swap(arr,i,j,j,i);
            swap(arr[i][j],arr[j][i]);
        }
    }
}

int main()
{

    int arr[R][C] = {{1, 2, 3, 4, 5},
                     {6, 7, 8, 9, 10},
                     {11, 12, 13, 14, 15},
                     {16, 17, 18, 19, 20},
                     {21, 22, 23, 24, 25}};
    cout<<"Original Martrix: \n";
    print(arr);
    transpose(arr);
    cout<<"Transpose Martrix: \n";
    print(arr);



    return 0;
}