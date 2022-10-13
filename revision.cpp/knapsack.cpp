#include<bits/stdc++.h>

using namespace std;

int knapsack(int n , int W , vector<int> weight , vector<int> val){
    if(n==0 || W ==0){
        return 0;
    }
    if(weight[n-1]>W){
        return knapsack(n-1,W,weight,val);
    }
    else{
        return max(val[n-1]+knapsack(n-1,W-weight[n-1],weight,val ) , knapsack(n-1,W , weight,val));
    }
}

int knapsackTopDown(int n , int W , vector<int> weight, vector<int> val , vector<vector<int>> &t){
    if(n==0||W==0){
        return 0;
    }
    if(t[n][W]!=-1){
        return t[n][W];
    }
    else{
        if(weight[n-1]<=W){
            t[n][W] = max(knapsackTopDown(n-1,W,weight,val,t),val[n-1]+knapsackTopDown(n-1,W-weight[n-1], weight,val,t));
        }
        else{
            t[n][W] = knapsackTopDown(n-1,W,weight,val,t);
        }
        return t[n][W];
    }
}

int knapsackBottomUp(int n , int W , vector<int> weight, vector<int> val){
    vector<vector<int>> t(n+1,vector<int>(W+1));
    for(int i = 0 ; i<=n ; i++){
        for(int j = 0 ; j <=W ; j++){
            if(i==0|| j==0){
                t[i][j] = 0;
            }
            else{
                if(weight[i-1]>j){
                    t[i][j] = t[i-1][j];
                }
                else{
                    t[i][j] = max(t[i-1][j-weight[i-1]]+val[i-1], t[i-1][j]);
                }
            }
        }
    }
    return t[n][W];
}



int main(){

    vector<int> weight = {2,3,4,5,6,7};
    vector<int> val = {4,7,1,3,5,12};
    int n = weight.size();
    int W = 20;
    vector<vector<int>> t(n+1,vector<int>(W+1,-1));
    // cout<<"Max Profit : "<<knapsack(n,W,weight,val)<<endl;
    // cout<<"Max Profit : "<<knapsackTopDown(n,W,weight,val,t)<<endl;
    cout<<"Max Profit : "<<knapsackBottomUp(n,W,weight,val)<<endl;
    return 0;
}