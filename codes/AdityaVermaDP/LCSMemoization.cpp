#include <bits/stdc++.h>

using namespace std;

int lcsLength(string s1, string s2 , int n , int m , vector<vector<int>> &t){
    if(n == 0 || m==0){
        return 0;
    }
    if(t[n][m]!=-1){
        return t[n][m];
    }
    if(s1[n-1]==s2[m-1]){
        t[n][m] = 1+lcsLength(s1,s2,n-1,m-1,t);
        return t[n][m];
    }
    else{
        t[n][m] = max(lcsLength(s1,s2,n-1,m,t),lcsLength(s1,s2,n,m-1,t));
        return t[n][m];
    }
}

int main()
{
    string s1 = "akasdfasdfxzvcbasdfqwesh";
    string s2 = "akasdksnh";
    vector<vector<int>> t (s1.length()+1 , vector<int> (s2.length()+1 ,-1));

    cout<<"Length of the maximum common Subsequence of s1 and s2 is : "<<lcsLength(s1,s2,s1.length(), s2.length(),t)<<endl;
    return 0;
}