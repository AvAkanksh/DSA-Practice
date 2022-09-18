#include <bits/stdc++.h>

using namespace std;

int lcsLength(string a, string b , int n ,int m , vector<vector<int>> &t){
    for(int i = 0 ; i <= n ; i++){
        for(int j = 0 ; j <= m ; j++){
            if(i == 0 || j == 0){
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

int SCSLength(string a , string b , int n , int m){
    vector<vector<int>> t (n+1, vector<int> (m+1));
    return n+m-lcsLength(a,b,n,m,t);
}

int main()
{
    string a = "aabana";
    string b = "aaca";

    cout<<"The Shortest length of a common Supersequence of a and b is : "<<SCSLength(a,b,a.length(),b.length())<<endl;

    return 0;
}