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

bool EqualSizePartition(vector<int> vec){
    int sum = 0 ;
    for(auto x : vec){
        sum = sum + x;
    }
    if(sum%2!=0){
        return false;
    }
    else{
        return subsetsum(vec.size(),sum/2,vec);
    }
}

int main(){

    vector<int> vec = {2,3,7,8,10};

    cout<<"Equal sum parition exists or not ? "<<EqualSizePartition(vec)<<endl;

    return 0;
}