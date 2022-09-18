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

Node* Insert(Node *root, int k){
    Node *temp = new Node(k);
    if(root == NULL){
        return temp;
    }
    Node *curr = root;
    Node *parent;
    while(curr!=NULL){
        parent = curr;
        if(curr->key > k){
            curr = curr->left;
        }
        else{
            curr = curr->right;
        }
    }
    if(parent->key > k){
        parent->left = temp;
    }
    else{
        parent->right = temp;
    }
    return root;
}

void printTreeBFS(Node *root){
    if(root == NULL){
        return ;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int count = q.size();
        for(int i = 0 ; i< count; i++){
            Node *curr = q.front();
            q.pop();
            cout<<curr->key<<" ";
            if(curr->left != NULL){q.push(curr->left);}
            if(curr->right != NULL){q.push(curr->right);}
        }
        cout<<endl;
    }
}

int height(Node* root){
    if(root == NULL){
        return 0;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    if(lh == -1 || rh == -1){return -1;}
    if(abs(lh-rh)>1){return -1;}
    return max(lh , rh) + 1;
}
int actualheight(Node* root){
    if(root == NULL){
        return 0;
    }
    int lh = actualheight(root->left);
    int rh = actualheight(root->right);
    // if(lh == -1 || rh == -1){return -1;}
    // if(abs(lh-rh)>1){return -1;}
    return max(lh , rh) + 1;
}
bool checkBalancedTree(Node *root){
    return (height(root) != -1);
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

    printTreeBFS(root);

    cout<<"Height of binary tree : "<<actualheight(root)<<endl;
    cout<<"The binary Tree is balanced or not ?  "<<checkBalancedTree(root)<<endl;
    return 0;
}