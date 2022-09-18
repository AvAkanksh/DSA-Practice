#include<bits/stdc++.h>

using namespace std;

void pascalsTriangle(int n){
    vector<vector<int>> triangle(n);
    for(int i = 0 ; i< n ; i++){
        triangle[i].resize(i+1);
        triangle[i][0] = triangle[i][i] = 1;
        for(int j = 1; j < i ; j++){
            triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
        }
    }
    for(auto x : triangle){
        for(auto y : x){
            cout<< y << " ";
        }
        cout<<endl;
    }
}

int main(){

    int n = 5;
    pascalsTriangle(n);

    return 0;
}