#include<bits/stdc++.h>

using namespace std;

struct Node{
    int key;
    Node *left;
    Node *right;
    Node(int k){H
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

void iterativePostOrder(Node *root){
    if(root == NULL){
        return;
    }
    stack<Node*>s1;
    stack<Node*>s2;
    s1.push(root);
    while(!(s1.empty())){
        Node *curr = s1.top();
        s1.pop();
        s2.push(curr);
        if(curr->left!=NULL){s1.push(curr->left);}
        if(curr->right!=NULL){s1.push(curr->right);}
    }
    while(!(s2.empty())){
        cout<<s2.top()->key<<endl;
        s2.pop();
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

    iterativePostOrder(root);
    return 0;
}