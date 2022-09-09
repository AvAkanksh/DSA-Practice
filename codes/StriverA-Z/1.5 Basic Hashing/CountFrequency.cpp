#include <bits/stdc++.h>

using namespace std;

void countFrequency(vector<int> vec){
    unordered_map<int,int> m;
    for(auto x : vec){
        m[x]++;
    }
    for(auto x : m){
        cout<<x.first <<" - "<<x.second<<endl;
    }
}

int main()
{
    vector<int> vec = {1,1,2,2,3,4,45,3,4,2,4,5,6,6,5,4,5,4,3,2,1,4,3,4,5,6,7,8,9,0};
    // countFrequency(vec);
    for(int i = 0 ; i < 10; i++){
        cout<<i<<endl;
    }
    return 0;
}