#include<bits/stdc++.h>

using namespace std;

void display(vector<vector<int>> vec){
    for(auto x: vec){
        for(auto y:x){
            cout<<y<<' ';
        }
        cout<<endl;
    }
}

void MergeOverlapping(vector<vector<int>> vec){
    vector<vector<int>> mergedintervals;
    // display(vec);
    sort(vec.begin(), vec.end());
    for(auto x : vec){
        if(mergedintervals.empty() || mergedintervals.back()[1]<x[0]){
            vector<int> v = {x[0],x[1]};
            mergedintervals.push_back(v);
        }
        else{
            mergedintervals.back()[1] = max(x[1],mergedintervals.back()[1]);
        }
    }
    display(mergedintervals);

}

int main(){

    vector<vector<int>> vec = {{1, 3}, {2, 6}, {8, 9}, {9, 11}, {2, 4}, {15, 18}, {8, 10}, {16, 17}};

    MergeOverlapping(vec);


    return 0;
}