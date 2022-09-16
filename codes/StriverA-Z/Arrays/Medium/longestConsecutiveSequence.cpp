#include<bits/stdc++.h>

using namespace std;

void longestConsecutiveSequence(vector<int> vec){
    unordered_set<int> s;
    int count;
    int ans = 1;
    for(auto x : vec){
        s.emplace(x);
    }
    for(auto x : vec){
        if(s.find(x-1)!=s.end()){
            continue;
        }
        else{
            count = 1;
            while(s.find(x+1)!=s.end()){
                count++;
                x++;
            }
            ans = max(ans,count);
        }
    }
    cout<<ans<<endl;
}

int main(){

    vector<int> vec = {100, 200, 1, 3, 2, 4};
    longestConsecutiveSequence(vec);
    return 0;
}