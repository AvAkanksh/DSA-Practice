#include<bits/stdc++.h>

using namespace std;

struct Node{
    int key;
    Node *left, *right;
    Node(int k ){
        key = k;
        left = right = NULL;
    }
};

bool isLeaf(Node *root){
    return ((root->left==NULL) && (root->right == NULL));
}


void addLeftBoundary(Node *root , vector<int> &ans){
    Node *curr = root->left;
    while(curr!=NULL){
        if(!isLeaf(curr)){ans.push_back(curr->key);}
        if(curr->left!=NULL){curr= curr->left;}
        else{curr=curr->right;}
    }
    
}


void addBottomBoundary(Node *root , vector<int> &ans){
    if(isLeaf(root)){
        ans.push_back(root->key);
    }
    if(root->left!=NULL){addBottomBoundary(root->left,ans);}
    if(root->right!=NULL){addBottomBoundary(root->right,ans);}
}


void addRightBoundary(Node *root , vector<int> &ans){
    Node *curr = root->right;
    vector<int> temp;
    while(curr!=NULL){
        if(!isLeaf(curr)){temp.push_back(curr->key);}
        if(curr->right!=NULL){curr= curr->right;}
        else{curr=curr->left;}
    }
    ans.insert(ans.end(),temp.rbegin(), temp.rend());
}

vector<int> printBoundary(Node*root){
    vector<int> ans ;
    if(root == NULL){
        return ans;
    }
    if(!isLeaf(root)){ans.push_back(root->key);};
    addLeftBoundary(root,ans);
    addBottomBoundary(root,ans);
    addRightBoundary(root,ans);
    return ans;
}


int main(){

    Node *root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(3);
    root->left->left->right = new Node(4);
    root->left->left->right->left = new Node(5);
    root->left->left->right->right = new Node(6);
    root->right = new Node(7);
    root->right->right = new Node(8);
    root->right->right->left = new Node(9);
    root->right->right->left->left = new Node(10);
    root->right->right->left->right = new Node(11);

    vector<int> boundaryTraversal;
    boundaryTraversal = printBoundary(root);
    for(auto x: boundaryTraversal){
        cout<<x<<" ";
    }
    cout<<endl;
    

    return 0;
}