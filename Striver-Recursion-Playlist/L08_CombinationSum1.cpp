#include<bits/stdc++.h>

using namespace std;

void display(vector<int> vec){
    for(auto x: vec){
        cout<<x<<' ';
    }
    cout<<endl;
}

void combinationSum(int i , vector<int> vec , int target , vector<int> partialRes ,vector<vector<int>> &res){
    if(i>=vec.size()||target==0){
        if(target==0){
            res.push_back(partialRes);
        }
        return;
    }
    partialRes.push_back(vec[i]);
    if(target-vec[i]>=0){
        combinationSum(i,vec,target-vec[i],partialRes,res);
    }
    partialRes.pop_back();
    combinationSum(i+1,vec,target,partialRes,res);
}

int main(){
    int target = 7;
    vector<int> vec = {2,3,6,7};
    vector<vector<int>> res;
    vector<int> partialRes;
    combinationSum(0,vec,target,partialRes,res);
    for(int i = 0 ; i<res.size() ; i++){
        display(res[i]);
    }

    return 0;
}