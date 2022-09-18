#include <bits/stdc++.h>

using namespace std;

int lcsLength(string a ,string b , int n, int m){
    vector<vector<int>> t(n+1,vector<int>(m+1));
    for(int i = 0 ; i<=n ; i++){
        for(int j = 0 ; j<=m ; j++){
            if(i==0 || j ==0){
                t[i][j] = 0;
            }
            else{
                if(a[i-1]==b[j-1]){
                    t[i][j] = 1 + t[i-1][j-1];
                }
                else{
                    t[i][j] = max(t[i-1][j],t[i][j-1]);
                }
            }
        }
    }
    return t[n][m];
}

int largestPalindromicSubsequence(string a){
    string b(a);
    reverse(b.begin(),b.end());
    return lcsLength(a,b,a.length(),b.length());
}

int minDeletionsPalindrome(string a){
    return a.length() - largestPalindromicSubsequence(a);
}

int main()
{
    string a = "agbcba";

    cout<<"Minimum Deletions required to convert it into a palindrome is : "<<minDeletionsPalindrome(a)<<endl;

    return 0;
}