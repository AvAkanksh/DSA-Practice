#include <bits/stdc++.h>

using namespace std;

int rodCuttingProfit(vector<int> lengths , vector<int> price , int N){
    int n = lengths.size();
    vector<vector<int>> t (n+1 ,vector<int> (N+1));
    for(int i = 0 ; i<= n; i++){
        for(int j = 0  ;  j <=N ; j++){
            if(i==0 || j==0){
                t[i][j] =0;
            }
            else if(lengths[i-1]>j){
                t[i][j] = t[i-1][j];
            }
            else{
                t[i][j] = max(price[i-1]+t[i][j-lengths[i-1]],t[i-1][j]);
            }
        }
    }
    return t[n][N];
}

int main()
{
    vector<int> lengths = {1,2,3,4,5,6,7};
    vector<int> price = {3,5,7,15,9,12,6};
    int N = 7;

    cout<<"Max Profit : "<<rodCuttingProfit(lengths, price , N)<<endl;


    return 0;
}