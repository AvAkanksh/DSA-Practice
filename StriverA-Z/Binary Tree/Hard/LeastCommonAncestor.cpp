#include<bits/stdc++.h>

using namespace std;

struct Node{
    int key;
    Node *left, *right;
    Node(int k ){
        key = k;
        left = NULL;
        right = NULL;
    }
};

Node* LCA(Node*root, int p , int q){
    if(root==NULL || root->key == p || root->key == q){
        return root;
    }
    Node *left = LCA(root->left,p,q);
    Node *right = LCA(root->right,p,q);
    if(left==NULL){
        return right;
    }
    else if(right == NULL){
        return left;
    }
    else{
        return root;
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

    int p = 4;
    int q = 5;

    cout<<LCA(root,p,q)->key<<endl;

    return 0;
}