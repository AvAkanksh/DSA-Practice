#include <bits/stdc++.h>

using namespace std;

int t[7][21];



int knapsack(int wt[] , int val[] , int W , int n){
    if(n == 0 || W ==0){
        return 0;
    }

    if(t[n][W] != -1){
        cout<<"t["<<n<<"]["<<W<<"] :"<<t[n][W]<<endl;
        return t[n][W];
    }

    if(wt[n-1]>W){
        t[n][W] = knapsack(wt , val , W , n-1);
        cout<<"t["<<n<<"]["<<W<<"] :"<<t[n][W]<<endl;
        return t[n][W];
    }

    t[n][W] = max(val[n-1]+knapsack(wt , val , W-wt[n-1] , n-1) , knapsack(wt , val , W , n-1));
    cout<<"t["<<n<<"]["<<W<<"] :"<<t[n][W]<<endl;
    return t[n][W];
}

void print(int n , int W){
        for(int i = 0 ; i < n+1; i++){
        for(int j = 0 ; j < W+1 ; j++){
            cout<<t[i][j]<<"\t";
        }
        cout<<endl;
    }
}

int main()
{
    int W = 20 ;
    int n = 6;
    int wt[] = {2,3,4,5,6,7};
    int val[] = {4,7,1,3,5,12};
    memset(t, -1 , sizeof(t));
    cout<<knapsack(wt,val,W,n)<<endl;
    return 0;
}
