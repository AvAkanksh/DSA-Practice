#include<bits/stdc++.h>

using namespace std;

void display(vector<int> vec){
    for(auto x: vec){
        cout<<x<<' ';
    }
    cout<<endl;
}

void combinationSum(int i , vector<int> vec , int target, vector<int> partialAns,vector<vector<int>> &res){
    if(target==0){
        res.push_back(partialAns);
        return;
    }
    for(int ind = i ; ind < vec.size() ; ind++){
        if(ind>i && vec[ind]!=vec[ind-1]||ind==i){
            if(target-vec[ind]>=0){
                partialAns.push_back(vec[ind]);
                combinationSum(ind+1, vec, target-vec[ind],partialAns,res);
                partialAns.pop_back();
            }
        }
    }
}

int main(){

    vector<int> vec = {1,2,1,1,2};
    sort(vec.begin(),vec.end());
    int target = 4;
    // display(vec);
    vector<int>partialAns;
    vector<vector<int>> res;
    combinationSum(0,vec,target,partialAns, res);
    for(int i = 0 ; i< res.size() ; i++){
        display(res[i]);
    }

    return 0;
}