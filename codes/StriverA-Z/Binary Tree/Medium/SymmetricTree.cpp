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

bool Symmetric(Node* left, Node *right){
    if(left == NULL || right == NULL){
        return (left == right);
    }
    if(left->key != right->key){return false;}
    return (Symmetric(left->right,right->left) && Symmetric(left->left, right->right));
}

bool checkSymmetric(Node *root){
    return (root==NULL) || (Symmetric(root->left,root->right)); 
}

int main(){

    Node *root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->right = new Node(2);
    root->right->left = new Node(4);
    root->right->right = new Node(3);
    
    if(checkSymmetric(root)){
        cout<<"Its a Symmetric Binary Tree!"<<endl;
    }
    else{
        cout<<"Its NOT a Symmetric Binary Tree!"<<endl;
    }

    return 0;
}