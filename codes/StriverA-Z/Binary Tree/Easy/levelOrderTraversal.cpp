#include<bits/stdc++.h>

using namespace std;

struct Node{
    int key;
    Node *left;
    Node *right;
    Node(int k){
        key = k;
        left = NULL;
        right = NULL;
    }
};

void preorderTraversal(Node *root){
    if(root==NULL){
        return;
    }
    cout<<root->key<<endl;
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void levelOrderTraversal(Node *root){
    vector<vector<int>> ans;
    if(root==NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(!(q.empty())){
        int count = q.size();
        vector<int> level;
        for(int i = 0 ; i< count ; i++){
            Node *curr = q.front();
            q.pop();
            level.push_back(curr->key);
            if(curr->left!=NULL){q.push(curr->left);            }
            if(curr->right!=NULL){q.push(curr->right);            }
        }
        ans.push_back(level);
    }
    for(auto i : ans){
        for(auto j : i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main(){

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->right->left = new Node(8);
    root->right->right->right = new Node(9);
    root->right->right->right->left = new Node(10);
    root->right->right->right->right = new Node(11);  

    levelOrderTraversal(root);
    return 0;
}