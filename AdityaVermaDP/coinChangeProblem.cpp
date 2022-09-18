#include <bits/stdc++.h>

using namespace std;

int totalWays(vector<int> coins , int sum){
    int n = coins.size();
    vector<vector<int>> t(n+1, vector<int> (sum+1));
    for(int i = 0 ; i <= n ; i++){
        for(int j = 0 ; j<=sum ; j++){
            if(i == 0 ){
                t[i][j] = 0;
            }
            if( j == 0 ){
                t[i][j] = 1;
            }
        }
    }
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j<=sum ; j++){
            if(coins[i-1]> j){
                t[i][j] = t[i-1][j];
            }
            else{
                t[i][j] = t[i][j-coins[i-1]] + t[i-1][j];
            }
        }
    }

    return t[n][sum];

}

int main()
{
    vector<int> coins = {1,2,3};
    int sum = 5;

    cout<<"Total number of ways : "<<totalWays(coins,sum)<<endl;

    return 0;
}