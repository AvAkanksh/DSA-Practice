#include<bits/stdc++.h>

using namespace std;

void display(vector<int> vec){
    for(auto x: vec){
        cout<<x<<' ';
    }
    cout<<endl;
}

void myReverse(vector<int> &vec, int l , int r){
    if(l>=r){
        return;
    }
    swap(vec[l],vec[r]);
    myReverse(vec,l+1,r-1);
}

bool checkPalindrome(string str, int i){
    int n = str.size();
    if(i>=n/2){
        return true;
    }
    if(str[i]!=str[n-i-1]){
        return false;
    }
    return checkPalindrome(str,i+1);
}

int main(){

    vector<int> vec = {1,2,3,4,5};
    display(vec);
    myReverse(vec,0,vec.size()-1);
    display(vec);
    cout<<"-----------------"<<endl;
    string str = "madam";
    auto ans = checkPalindrome(str, 0) ? "Yes \"" + str + "\" is a Palindrome!" : "No \"" + str + "\" is NOT a Palindrome!";
    cout<<ans<<endl;
    return 0;
}