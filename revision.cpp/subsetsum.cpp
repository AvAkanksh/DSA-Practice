#include<bits/stdc++.h>

using namespace std;

bool subsetsum(int n , int sum , vector<int> vec){
    vector<vector<int>> t(n+1,vector<int>(sum+1));
    for(int j = 0 ; j<=sum ; j++){
        t[0][j] = false;
    }
    for(int i = 0 ; i<=n; i++){
        t[i][0] = true;
    }

    for(int i =1 ; i<=n ; i++){
        for(int j = 1 ; j<=sum ; j++){
            if(vec[i-1]>j){
                t[i][j] = t[i-1][j];
            }
            else{
                t[i][j] = t[i-1][j-vec[i-1]] || t[i-1][j];
            }
        }
    }
    return t[n][sum];
}

int main(){

    vector<int> vec = {2,3,7,8,10};
    int sum = 19;

    cout<<"The subset exists or not ? "<<subsetsum(vec.size(),sum,vec)<<endl;

    return 0;
}