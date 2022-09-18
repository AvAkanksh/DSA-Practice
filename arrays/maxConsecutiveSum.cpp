#include<iostream>
#include<vector>

using namespace std;

int maxConsecutiveSum(vector<int> vec){
    vector<int> max_sum(vec.size());
    int res = vec[0];
    max_sum[0] = vec[0];
    for(int i = 1; i < vec.size();i++){
        max_sum[i] = max(vec[i]+max_sum[i-1],vec[i]);
        res = max(res,max_sum[i]);
    }
    return res;
}

int main(){
    vector<int> vec  = { 1,2,1,5,-2,-1,3,5,-8,9,1,1,-10,-3};
    cout<<maxConsecutiveSum(vec)<<endl;
}