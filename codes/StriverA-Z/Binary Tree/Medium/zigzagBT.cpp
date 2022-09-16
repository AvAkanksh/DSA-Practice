#include<bits/stdc++.h>

using namespace std;

struct Node{
    int key;
    Node*left;
    Node*right;
    Node(int k){
        key = k;
        left = NULL;
        right = NULL;
    }
};

vector<vector<int>> zigzag(Node*root){
    vector<vector<int>>ans;
    if(root == NULL){
        return ans;
    }
    queue<Node*> q;
    q.push(root);
    bool flag = true;
    while(!q.empty()){
        int count = q.size();
        vector<int>subans(count);
        for(int i = 0 ; i<count ; i++){
            Node*curr = q.front();
            q.pop();
            int ind = flag ? i :count -i-1;
            subans[ind]=curr->key;
            if(curr->left != NULL){q.push(curr->left);}
            if(curr->right != NULL){q.push(curr->right);}
        }
        flag = !(flag);
        ans.push_back(subans);
    }
    return ans;
}

int main(){

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<vector<int>>ans = zigzag(root);
    for(auto x : ans){
        for(auto y : x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}