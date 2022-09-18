#include<bits/stdc++.h>

using namespace std;

struct Node{
    int key ;
    Node *left ;
    Node *right ;
    Node(int k){
        key = k;
        left = NULL;
        right = NULL;
    }
};

Node* Insert(Node* root , int k){
    Node *temp = new Node(k);
    if(root == NULL){
        return temp;
    }
    Node *curr = root;
    Node *parent;
    while(curr!=NULL){
        parent = curr;
        if(curr->key>k){
            curr = curr->left;
        }
        else{
            curr = curr->right;
        }
    }
    if(parent->key>k){
        parent->left = temp;
    }
    else{
        parent->right = temp;
    }

    return root;
}

int height(Node *root, int &diameter){
    if(root == NULL){
        return 0;
    }
    int lh = height(root->left, diameter);
    int rh = height(root->right, diameter);

    diameter = max(diameter , lh + rh + 1);    
    return max(lh, rh) +1;
}

int diameterBT(Node *root){
    int diameter = 0;
    height(root,diameter);
    return diameter;
}

int main(){

    Node *root = NULL;
    root = Insert(root,5);
    root = Insert(root,7);
    root = Insert(root,6);
    root = Insert(root,1);
    root = Insert(root,2);
    root = Insert(root,8);
    root = Insert(root,9);
    root = Insert(root,11);
    root = Insert(root,18);
    root = Insert(root,10);
    root = Insert(root,16);
    root = Insert(root,14);
    
    cout<<"Diameter of the Binary Tree : "<<diameterBT(root)<<endl;

    return 0;
}