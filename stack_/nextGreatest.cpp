#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

void printVec(vector<int> vec){
    for(int i = 0 ; i < int(vec.size()); i++){
        cout<< vec[i]<<'\t';
    }
    cout<<'\n';
}

vector<int> nextGreatest(vector<int> vec){
    vector<int> ans;
    stack<int> s;
    ans.push_back(-1);
    int n = vec.size();
    s.push(vec[n-1]);
    for(int i = n-2 ; i >= 0 ; i--){
        while(!(s.empty()) && vec[i]>=s.top()){
            s.pop();
        }
        int ng = s.empty() ? -1: s.top();
        ans.push_back(ng);
        s.push(vec[i]);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
    vector<int> vec ;
    // vec = {1,2,3,4};
    vec = {2,1,3,7,5,6,3,8,3,1,4};
    printVec(vec);
    vector<int> ans = nextGreatest( vec);
    printVec(ans);

    return 0;
}