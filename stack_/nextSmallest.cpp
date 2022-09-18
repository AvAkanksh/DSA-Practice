#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>

using namespace std;

void printVec(vector<int> vec){
    for(int i = 0 ; i< int(vec.size());i++){
        cout<<vec[i]<<'\t';
    }
    cout<<'\n';
}

vector<int> nextSmall(vector<int> vec){
    vector<int> ans;
    int n = int(vec.size());
    stack<int> s;
    ans.push_back(-1);
    s.push(vec[n-1]);
    for(int i = n-2; i>=0; i--){
        while(!(s.empty()) && vec[i]<=s.top()){
            s.pop();
        }
        int ns = s.empty() ? -1 : s.top();
        ans.push_back(ns);
        s.push(vec[i]);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
    vector<int> vec ;
    vec = {9,4,21,5,2,1,1,8,4,57,8,4,35,6,3,5,0,1};
    printVec(vec);
    vector<int> ans;
    ans = nextSmall(vec);
    printVec(ans);
    return 0;
}