#include <bits/stdc++.h>

using namespace std;

int solve(vector<int> val , int i , int j){
    if(i>=j){
        return 0;
    }
    int mx = INT_MAX;
    for(int k = i ; k<j; k++){
        int tempAns = solve(val,i,k) + solve(val,k+1,j) + val[i-1]*val[k]*val[j];
        mx = min(mx,tempAns);
    }
    return mx;
}

int main()
{
    vector<int> val = {10,30,5,60};
    cout<<solve(val,1,val.size()-1)<<endl;

    return 0;
}