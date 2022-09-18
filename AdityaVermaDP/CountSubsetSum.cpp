#include <bits/stdc++.h>

using namespace std;

int countSubsetSum(vector<int> vec , int sum){
    int n = vec.size();
    vector<vector<int>> t(n+1 , vector<int> (sum+1));
    for(int i = 0 ; i<= n ; i++){
        for(int j = 0 ; j <= sum ; j++){
            if(i ==0){
                t[i][j] = 0;
            }
            if(j ==0){
                t[i][j] =1;
            }
        }
    }
    for(int i = 1 ; i<= n ; i++){
        for(int j = 1 ; j <= sum ; j++){
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


int main()
{
    vector<int> vec = {2,3,5,8,10,9,1,1};
    int sum = 10;
    cout<<"Total number of subsets with sum = "<<sum<<" are : "<<countSubsetSum(vec,sum)<<endl;

    return 0;
}