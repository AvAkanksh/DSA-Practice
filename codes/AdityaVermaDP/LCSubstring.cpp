#include <bits/stdc++.h>

using namespace std;

int lcsLength(string s1, string s2 , int n , int m , vector<vector<int>> &t){
    int ans = 0;
    for(int i = 0 ; i<= n ; i++){
        for(int j = 0 ; j<=m ; j++){
            if(i== 0 || j==0){
                t[i][j] = 0;
            }
            else{
                if(s1[i-1]==s2[j-1]){
                    t[i][j] = 1+t[i-1][j-1];
                    ans = max(ans, t[i][j]);
                }
                else{
                    t[i][j] = 0;
                }
            }
        }
    }
    return ans;
}

int main()
{
    string s1 = "akasdfasdfxzvcbasdfqwesh";
    string s2 = "akasdksnh";
    vector<vector<int>> t (s1.length()+1 , vector<int> (s2.length()+1 ,-1));

    cout<<"Length of the maximum common Subsequence of s1 and s2 is : "<<lcsLength(s1,s2,s1.length(), s2.length(),t)<<endl;
    return 0;
}