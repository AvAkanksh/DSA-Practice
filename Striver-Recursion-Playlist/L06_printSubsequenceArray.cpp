#include<bits/stdc++.h>

using namespace std;

void display(vector<int> vec){
    for(auto x: vec){
        cout<<x<<' ';
    }
    cout<<endl;
}

void printSubsequence(int index, vector<int> vec,vector<int> &res){
    if(index>=vec.size()){
        display(res);
        return;
    }
    res.push_back(vec[index]);
    printSubsequence(index+1,vec,res);
    res.pop_back();
    printSubsequence(index+1,vec,res);
}

int main(){

    vector<int> vec = {1,2,3};
    vector<int> res;
    printSubsequence(0,vec,res);

    return 0;
}