#include <bits/stdc++.h>

using namespace std;

bool SubsetSum(vector<int> vec , int sum){
    int n = vec.size();
    vector<vector<bool>> t(n+1, vector<bool> (sum+1));
    for(int i = 0 ; i <= n ; i++){
        for(int j = 0 ; j <= sum ; j++){
            if(i == 0 ){
                t[i][j] = false;
            }
            if(j == 0){
                t[i][j] = true;
            }
        }
    }
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= sum ; j++){
            if(vec[i-1]>j){
                t[i][j] = t[i-1][j];
            }
            else{
                t[i][j] = ((t[i-1][j]) || (t[i-1][j-vec[i-1]]));
            }
        }
    }
    return t[n][sum];
}

bool EqualPartition(vector<int> vec){
    int sum = 0 ;
    for(auto x : vec){
        sum += x;
    }
    if(sum%2!=0){
        return false;
    }
    return SubsetSum(vec, sum/2);
}

int main()
{
    vector<int> vec = {1,5,0,2,11,5};

    if(EqualPartition(vec)){
        cout<<"Equal Partition Exists!"<<endl;
    }
    else
        cout<<"Equal Partition Doesn't Exists!"<<endl;

    return 0;
}