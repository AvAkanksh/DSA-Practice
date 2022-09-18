#include <bits/stdc++.h>

using namespace std;

bool checkSubsetSum(vector<int> vec, int sum){
    int n = vec.size();
    vector<vector<bool>> t (n+1 , vector<bool>(sum+1));
    for(int i = 0 ; i <= n ; i++){
        for(int j = 0 ; j <= sum ; j++){
            if(i==0){
                t[i][j] = false;
            }
            if(j == 0){
                t[i][j] = true;
            }
        }
    }
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= sum ; j++){
            cout<<"i : "<<i <<"| j : "<<j <<endl;
            if(vec[i-1]>j){
                t[i][j] = t[i-1][j];
            }
            else{
                t[i][j] = t[i-1][j] || t[i-1][j-vec[i-1]];
            }
        }
    }
    return t[n][sum];
}

int main()
{
    vector<int> vec = {2,3,7,8,10};
    int sum = 17;
    if(checkSubsetSum(vec, sum)){
        cout<<"Subset Exists!"<<endl;
    }
    else
        cout<<"Subset Doesn't Exists!"<<endl;

    return 0;
}