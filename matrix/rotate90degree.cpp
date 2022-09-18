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

void transpose(int arr[R][C]){
    for(int i = 0 ; i < R; i++){
        for(int j = i+1 ; j < C; j++){
            // swap(arr,i,j,j,i);
            swap(arr[i][j],arr[j][i]);
        }
    }
}

void reverse(int arr[R][C]){
    int l = 0 ;
    int h = R-1;
    while(l<h){
        for(int j = 0; j < C; j++){
            swap(arr[l][j],arr[h][j]);
        }
        l++;
        h--;
    }
}


int main()
{

    int arr[R][C] = {{1, 2, 3, 4, 5},
                     {6, 7, 8, 9, 10},
                     {11, 12, 13, 14, 15},
                     {16, 17, 18, 19, 20},
                     {21, 22, 23, 24, 25}};
    cout<<"\nOriginal Matrix:\n"<<endl;
    print(arr);
    cout<<"\nTranspose Matrix:\n"<<endl;
    transpose(arr);
    print(arr);
    cout<<"\n90 degree rotated Matrix:\n"<<endl;
    reverse(arr);
    print(arr);


    return 0;
}