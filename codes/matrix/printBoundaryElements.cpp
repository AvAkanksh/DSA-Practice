#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Title of the Program
const int R = 5;
const int C = 5;


void printBoundary(int arr[R][C]){
    int l = 0 ;
    int r = C-1 ;
    int b = R-1 ;
    int t = 0 ;
    for(int i = 0 ; i<=r;i++){
        cout<<arr[l][i]<<"\t";
    }
    t++;
    if(t>b){
        return;
    }
    for(int i = t ; i <=b;i++){
        cout<<arr[i][r]<<"\t";
    }
    r--;
    if(l>r){
        return;
    }
    for(int i = r ; i >= 0;i--){
        cout<<arr[b][i]<<"\t";
    }
    b--;
    for(int i = b ; i >=t;i--){
        cout<<arr[i][l]<<"\t";
    }
    l++;

}


int main()
{


    int arr[R][C] = {{1, 2, 3, 4, 5},
                     {6, 7, 8, 9, 10},
                     {11, 12, 13, 14, 15},
                     {16, 17, 18, 19, 20},
                     {21, 22, 23, 24, 25}};

    // int arr[R][C] = {{1}, {2}, {3}, {4}, {5}};
    // int arr[R][C] = {{1, 2, 3, 4, 5}};

    printBoundary(arr);

    return 0;
}