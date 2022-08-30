#include <bits/stdc++.h>

using namespace std;

int mcmMemoization(vector<int> val, int i ,int j , vector<vector<int>> &t){
    if(i>=j){
        return 0;
    }
    if(t[i][j]!=-1){
        return t[i][j];
    }
    int mn = INT_MAX ;
    for(int k = i ; k<j ; k++){
        int tempAns = mcmMemoization(val,i,k,t) + mcmMemoization(val,k+1,j,t) + val[i-1]*val[k]*val[j];
        mn = min(mn,tempAns);
    }
    t[i][j] = mn;
    return t[i][j];
}

int main()
{
    vector<int> val = {10,30,5,60};
    vector<vector<int>> t(val.size()+1 , vector<int> (val.size()+1,-1));
    cout<<"Minimum Multiplications possible are : "<<mcmMemoization(val,1,val.size()-1,t)<<endl;


    return 0;
}