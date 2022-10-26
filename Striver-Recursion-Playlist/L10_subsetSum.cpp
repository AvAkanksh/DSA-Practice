#include<bits/stdc++.h>

using namespace std;

void display(vector<int> vec){
    for(auto x: vec){
        cout<<x<<' ';
    }
    cout<<endl;
}

void subsetSum(int i ,vector<int> vec,int sum,vector<int> &res){
    if(i>=vec.size()){
        res.push_back(sum);
        return;
    }
    subsetSum(i+1,vec,sum+vec[i],res);
    subsetSum(i+1,vec,sum,res);
}

int main(){

    vector<int> vec = {2,3};
    vector<int> res ;
    subsetSum(0,vec,0,res);
    sort(res.begin(),res.end());
    display(res);
    return 0;
}