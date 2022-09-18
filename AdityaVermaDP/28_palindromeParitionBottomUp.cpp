#include<bits/stdc++.h>

using namespace std;

bool isPalindrome(string s , int i , int j){
    while(i<j){
        if(s[i]==s[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}

int solve(string s, int i , int j,vector<vector<int>> &t){
    if(i>=j){
        return 0;
    }
    if(isPalindrome(s,i,j)){
        return 0;
    }
    if(t[i][j]!=-1){
        return t[i][j];
    }

    int mn = INT_MAX;
    for(int k = i ; k<j ; k++){
        int tempAns = 1 + solve(s,i,k,t) + solve(s,k+1,j,t);
        mn = min(mn, tempAns);
    }
    t[i][j] = mn;
    return t[i][j];
}

int main(){

    string s = "anitinbcb";
    int n = s.length();
    vector<vector<int>> t(n+1,vector<int>(n+1,-1));
    cout<<"The minimum number of partitions requied to make it a palindrome are : "<<solve(s , 0,n-1,t)<<endl;

    return 0;
}