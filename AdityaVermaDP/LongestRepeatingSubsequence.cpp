#include <bits/stdc++.h>

using namespace std;

string longestRepeatingSubsequence(string a ,int n ){
    string b(a);
    int m = b.length();
    vector<vector<int>> t (n+1 , vector<int> (m+1));
    for(int i = 0 ; i<= n ; i++){
        for(int j = 0 ; j<=m ; j++){
            if(i== 0 || j==0){
                t[i][j] = 0;
            }
            else{
                if(a[i-1]==b[j-1] && i!=j){
                    t[i][j] = 1+t[i-1][j-1];
                }
                else{
                    t[i][j] = max(t[i-1][j] , t[i][j-1]);
                }
            }
        }
    }
    int i = n;
    int j = m;
    string ans = "";
    while(i>0 && j>0){
        if(a[i-1]==b[j-1] && i!=j){
            ans.push_back(a[i-1]);
            i--;
            j--;
        }
        else if(t[i-1][j]>t[i][j-1]){
            i--;
        }
        else{
            j--;
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    string s = "aa";
    cout<<"Longest Repeating Subsequence : "<<longestRepeatingSubsequence(s,s.length())<<endl;

    return 0;
}