#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Title of the Program
void print(vector <int> arr[], int m){
    for(int i = 0 ; i<m ; i++){
        for(int j = 0 ; j<arr[i].size();j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
}



int main()
{
    int m = 10, n = 10;
    vector<int> arr[m];
    for(int i = 0 ; i <m ; i++){
        for (int j = 0 ; j <n ; j++){
            arr[i].push_back(i+j);
        }
    }

    print(arr,m);

    return 0;
}