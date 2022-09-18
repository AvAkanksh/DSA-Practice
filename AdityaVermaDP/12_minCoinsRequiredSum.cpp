#include <bits/stdc++.h>

using namespace std;

int coinsRequired(vector<int>coins, int sum){
    int n = coins.size();
    vector<vector<int>> t(n+1,vector<int> (sum+1));
    for(int i = 0 ; i<= n ; i++){
        for(int j = 0 ; j<= sum ; j++){
            if(i ==0 ){
                t[i][j] = INT_MAX -1;
            }
            else{
                if(j==0){
                    t[i][j] = 0;
                }
            }
        }
    }
    int i =1;
    int j =1;
    for(; j<=sum; j++ ){
        if(j%coins[i-1]==0){
            t[i][j] = j/coins[i-1];
        }
        else{
            t[i][j] = INT_MAX -1;
        }
    }
    for(int i = 2 ; i<= n ; i++){
        for(int j = 1 ; j<= sum ; j++){
            if(coins[i-1]>j){
                t[i][j] = t[i-1][j];
            }
            else{
                t[i][j] = min(t[i][j-coins[i-1]]+1 , t[i-1][j]);
            }
        }
    }
    return t[n][sum];
}

int main()
{
    vector<int> coins = {3,6,5,7};
    int sum = 8;
    cout<<"Minimum number of coins required : "<<coinsRequired(coins,sum)<<endl;

    return 0;
}