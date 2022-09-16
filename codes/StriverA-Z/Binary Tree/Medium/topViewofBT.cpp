#include<bits/stdc++.h>

using namespace std;

struct Node{
    int key;
    Node *left, *right;
    Node(int k){
        key = k;
        left = right = NULL;
    }
};

vector<int> topView(Node *root){
    vector<int> ans;
    if(root == NULL){return ans;}
    int dist = 0;
    map<int,int> m;
    queue<pair<Node*,int>> q;
    
    q.push({root,dist});
    while(!q.empty()){
        pair<Node*,int> curr = q.front();
        q.pop();
        if(m.find(curr.second)==m.end()){
            m[curr.second] = curr.first->key;
        }
        if(curr.first->left!=NULL){q.push({curr.first->left,curr.second-1});}
        if(curr.first->right!=NULL){q.push({curr.first->right,curr.second+1});}
    }
    for(auto x : m){
        ans.push_back(x.second);
    }
    return ans;
}

int main(){

    Node *root = new Node(1);
    root->left = new Node(2);  
    root->right = new Node(3);  
    root->right->right = new Node(7);  
    root->left->left = new Node(4);  
    root->left->right = new Node(5);  
    root->left->right->right = new Node(6);  

    vector<int> ans = topView(root);
    for(auto x: ans){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}