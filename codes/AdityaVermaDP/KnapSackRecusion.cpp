#include <bits/stdc++.h>

using namespace std;

int knapsack(int wt[] , int val[] , int W , int n){
    if(n == 0 || W ==0){
        return 0;
    }
    if(wt[n-1]>W){
        return  knapsack(wt , val , W , n-1);
    }
    return max(val[n-1]+knapsack(wt , val , W-wt[n-1] , n-1) , knapsack(wt , val , W , n-1));
}

int main()
{
    int wt[] = {2,3,4,5,6,7};
    int val[] = {4,7,1,3,5,12};
    int W = 20;
    int n = 6;
    cout<<"Max Profit : "<<knapsack(wt,val,W,n)<<endl;

    return 0;
}