#include <bits/stdc++.h>

using namespace std;


int countSubsetSum(vector<int> vec , int sum){
    int n = vec.size();
    vector<vector<int> > t (n+1 , vector<int>(sum+1));
    for(int i = 0 ; i<=n ; i++){
        for(int j = 0 ; j<=sum ; j++){
            if(i==0){t[i][j]=0;}
            if(j==0){t[i][j]=1;}
        }
    }
    for(int i = 1 ; i<=n ; i++){
        for(int j = 1 ; j<=sum ; j++){
            if(vec[i-1]>j){
                t[i][j] = t[i-1][j];
            }
            else{
                t[i][j] = t[i-1][j] + t[i-1][j-vec[i-1]];
            }
        }
    }
    return t[n][sum];
}

int countSubsetDiff(vector<int> vec , int diff){
    int sum = 0 ;
    for(auto x : vec){
        sum += x;
    }
    return countSubsetSum(vec, (sum+diff)/2);
}

int main()
{
    vector<int> vec =  {1,1,2,3};
    int targetSum_value = 1;

    cout<<"Total number of subsets with the having the total sum equal to target sum  of "<<targetSum_value<<" are : "<<countSubsetDiff(vec, targetSum_value)<<endl;

    return 0;
}