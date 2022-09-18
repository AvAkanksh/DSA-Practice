#include <bits/stdc++.h>

using namespace std;

bool lcsLength(string s1, string s2 , int n , int m ){
    vector<vector<int>> t (s1.length()+1 , vector<int> (s2.length()+1 ));
    for(int i = 0 ; i<= n ; i++){
        for(int j = 0 ; j<=m ; j++){
            if(i== 0 || j==0){
                t[i][j] = 0;
            }
            else{
                if(s1[i-1]==s2[j-1]){
                    t[i][j] = 1+t[i-1][j-1];
                }
                else{
                    t[i][j] = max(t[i-1][j] , t[i][j-1]);
                }
            }
        }
    }
    return (t[n][m] == n);
}

int main()
{
    string s1 = "akanksh";
    string s2 = "akafasfdnksasfdh";

    cout<<"Sequence Pattern Matching (0/1) ? : "<<lcsLength(s1,s2,s1.length(), s2.length())<<endl;
    return 0;
}