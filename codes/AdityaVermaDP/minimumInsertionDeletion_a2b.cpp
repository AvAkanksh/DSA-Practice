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

void minInsertionDeletion(string a , string b , int n , int m){
    int lcsLen = lcsLength(a,b,n,m);
    cout<<"Deletion  : "<<(n-lcsLen)<<endl;
    cout<<"Insertion : "<<(m-lcsLen)<<endl;
}

int main()
{
    string a = "heap";
    string b = "pea";

    minInsertionDeletion(a,b,a.length(),b.length());

    return 0;
}