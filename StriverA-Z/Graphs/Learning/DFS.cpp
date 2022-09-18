#include<bits/stdc++.h>

using namespace std;

void addEdge(vector<vector<int>>&adj , int u , int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printVec(vector<int> vec){
    for(auto x : vec){
        cout<<x <<" ";
    }
    cout<<endl;
}


void dfs(int n , vector<vector<int>> adj , vector<int> &visited , vector<int> &ans){
    ans.push_back(n);
    visited[n] = 1;
    for(auto x : adj[n]){
        if(visited[x]==0){
            dfs(x,adj,visited,ans);
        }
    }    
}

void dfsofGraph(int nodes, vector<vector<int>> adj){

    vector<int> visited(nodes+1,0);
    vector<int> ans;
    for(int i = 1; i<= nodes; i++){
        if(visited[i]==0){
            dfs(i,adj,visited,ans);
        }
    }
    printVec(ans);

}

int main(){

    int nodes = 7;
    vector<vector<int>> adj(nodes+1);
    addEdge(adj,1,2);
    addEdge(adj,4,2);
    addEdge(adj,7,2);
    addEdge(adj,4,6);
    addEdge(adj,7,6);
    addEdge(adj,3,5);

    dfsofGraph(nodes,adj);

    return 0;
}