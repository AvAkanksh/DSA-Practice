#include <bits/stdc++.h>

using namespace std;

int minimumDiff(vector<int> vec){
    int sum = 0;
    int n = vec.size();
    for(auto x: vec){
        sum += x;
    }
    vector<vector<bool>> t (n+1, vector<bool> (sum+1));
    for (int i = 0 ; i <= n ; i++){
        for (int j = 0 ; j<= sum ; j++){
            if( i == 0 ) {t[i][j]=false;}
            if( j == 0 ) {t[i][j]=true;}
        }
    }
    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j<= sum ; j++){
            if(vec[i-1]>j){
                t[i][j] = t[i-1][j];
            }
            else{
                t[i][j] = t[i-1][j] || t[i-1][j-vec[i-1]];
            }
        }
    }
    int ans = INT_MAX;
    for(int j = 0 ; j <= sum/2 ; j++){
        if(t[n][j]){
            ans = min(ans , sum - 2*j);
        }
    }
    return ans;
}

int main()
{
    vector<int> vec = {6,11,1,5};
    cout<<"Minimum difference of the subsets : "<<minimumDiff(vec)<<endl;

    return 0;
}