#include <bits/stdc++.h>

using namespace std;

int lcsLength(string s1, string s2 , int n , int m){
    if(n == 0 || m==0){
        return 0;
    }
    if(s1[n-1]==s2[m-1]){
        return 1+lcsLength(s1,s2,n-1,m-1);
    }
    else{
        return max(lcsLength(s1,s2,n-1,m),lcsLength(s1,s2,n,m-1));
    }
}

int main()
{
    string s1 = "akasdfasdfxzvcbasdfqwesh";
    string s2 = "akasdksnh";

    cout<<"Length of the maximum common Subsequence of s1 and s2 is : "<<lcsLength(s1,s2,s1.length(), s2.length())<<endl;
    return 0;
}