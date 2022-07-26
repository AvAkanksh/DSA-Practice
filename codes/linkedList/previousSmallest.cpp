#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>

using namespace std;

void printVec(vector<int> vec){
    for(int i = 0 ; i < int(vec.size()); i++){
        cout<<vec[i]<<'\t';
    }
    cout<<'\n';
}

vector<int> prevSmallest(vector<int> vec){
    vector<int> ans;
    stack<int> s;
    ans.push_back(-1);
    s.push(vec[0]);
    for(int i = 1 ; i< int(vec.size()); i++){
        while(!(s.empty()) && vec[i]<=s.top()){
            s.pop();
        }
        int ps = s.empty() ? -1 : s.top();
        ans.push_back(ps);
        s.push(vec[i]);
    }
    return ans;
}

int main(){
    vector<int> vec;
    vec = {1,2,7,4,2,8,9,7,9,8,4,7,0,3,6,1,13,2};
    printVec(vec);
    vector<int> ans = prevSmallest(vec);
    printVec(ans);
    return 0;
}