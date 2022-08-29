#include <bits/stdc++.h>

using namespace std;

int knapsack(int wt[] , int val[] , int W , int n){
    vector<vector<int>> t(n+1,vector<int> (W+1) );
    for(int i = 0 ; i <= n; i++){
        for(int j = 0 ; j <=W ; j++){
            if(i == 0 || j == 0){
                t[i][j] = 0;
            }
            else{
                if(wt[i-1]>j){
                    t[i][j] = t[i-1][j];
                }
                else{
                    t[i][j] = max(val[i-1]+t[i-1][j-wt[i-1]], t[i-1][j] );
                }
            }
        }
    }
    return t[n][W];
}

int main()
{
    int wt[] = {2,3,4,5,6,7};
    int val[] = {4,7,1,3,5,12};
    int W = 20 ;
    int n = sizeof(wt)/sizeof(wt[0]);
    cout<<knapsack(wt,val,W,n)<<endl;
    return 0;
}
