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

void iterativePreorderTraversal(Node *root){
    if(root==NULL){
        return;
    }
    stack<Node*> s;
    s.push(root);
    while(!(s.empty())){
        Node *curr = s.top();
        s.pop();
        cout<<curr->key<<endl;
        if(curr->right!=NULL){s.push(curr->right);}
        if(curr->left!=NULL){s.push(curr->left);}
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

    iterativePreorderTraversal(root);
    return 0;
}