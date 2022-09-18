#include<bits/stdc++.h>

using namespace std;

int maxConsecutiveOnes(vector<int> vec){
    int count = 0;
    int ans = 0;
    for(auto x : vec){
        if(x==1){
            count++;
        }
        else{
            count = 0;
        }
        ans = max(count,ans);
    }
    return ans;
}

int main(){
    vector<int> vec = {1,0,1,1,1,1,1,1,1,1,0,0,0,0,0,1,0,1,1,1,0};
    cout<<"Maximum Consecutive 1's are : "<<maxConsecutiveOnes(vec)<<endl;
    return 0;
}