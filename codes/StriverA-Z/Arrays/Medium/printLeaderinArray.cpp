#include<bits/stdc++.h>

using namespace std;

void display(vector<int> vec){
    for(auto x: vec){
        cout<<x<<' ';
    }
    cout<<endl;
}

void printLeaders(vector<int> vec){
    int n = vec.size();
    int maxValue = vec[n-1];
    vector<int> ans ;
    ans.push_back(maxValue);
    for(int i = n-2; i>=0 ; i--){
        if(vec[i]>maxValue){
            ans.push_back(vec[i]);
            maxValue = vec[i];
        }
    }
    reverse(ans.begin(),ans.end());
    display(ans);
}

int main(){

    vector<int> vec = {10,22,12,3,0,6};
    printLeaders(vec);
    return 0;
}