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

int solve(string s, int i , int j){
    if(i>=j){
        return 0;
    }
    if(isPalindrome(s,i,j)){
        return 0;
    }
    int mn = INT_MAX;
    for(int k = i ; k<j ; k++){
        int tempAns = 1 + solve(s,i,k) + solve(s,k+1,j);
        mn = min(mn, tempAns);
    }
    return mn;
}

int main(){

    string s = "anitinbcb";

    cout<<"The minimum number of partitions requied to make it a palindrome are : "<<solve(s , 0,s.length()-1)<<endl;

    return 0;
}