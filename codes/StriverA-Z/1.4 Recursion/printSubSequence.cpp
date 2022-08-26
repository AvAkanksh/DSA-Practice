#include <bits/stdc++.h>

using namespace std;

void display(vector<int> vec){
    for(int i = 0 ; i < int(vec.size()); i++){
        cout<<vec[i]<<"\t";
    }
    cout<<""<<endl;
}

void printSubsequence(int i , string &s, string curr){
    if(i==s.length()){
        cout<<curr<<endl;
        return;
    }
    printSubsequence(i+1 ,s , curr + s[i]);
    printSubsequence(i+1 ,s , curr);
}

int main()
{
    string s = "abcd";
    string curr = "";
    printSubsequence(0,s,curr);
    return 0;
}