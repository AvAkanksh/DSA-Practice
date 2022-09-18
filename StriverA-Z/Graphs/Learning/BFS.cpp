#include<bits/stdc++.h>

using namespace std;

void addEdge(vector<vector<int>> &adj, int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printVec(vector<int> vec){
    for(auto x: vec){
        cout<<x<<" ";
    }
    cout<<endl;
}

void BFS(int nodes, vector<vector<int>> adj ){
    vector<int>visited(nodes +1,0);
    vector<int> ans;
    for(int i = 1 ; i<=nodes; i++){
        if(visited[i]==0){
            queue<int> q;
            q.push(i);
            visited[i] = 1;
            while(!q.empty()){
                auto x = q.front();
                q.pop();
                ans.push_back(x);
                for(auto y : adj[x]){
                    if(visited[y]==0){
                        q.push(y);
                        visited[y] = 1;
                    }
                }
            }
            printVec(ans);
            ans.clear();
        }
    }

    cout<<endl;
}

void printAdj(vector<vector<int>> adj){
    cout<<"----------------------------"<<endl;
    for(auto x : adj){
        for(auto y : x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    cout<<"----------------------------"<<endl;
}

int main(){

    int nodes = 7;
    vector<vector<int>> adj(nodes+1);
    addEdge(adj,1,2);
    addEdge(adj,3,2);
    addEdge(adj,7,2);
    addEdge(adj,7,5);
    addEdge(adj,3,5);
    addEdge(adj,4,6);
    printAdj(adj);
    BFS(nodes,adj);
    return 0;
}