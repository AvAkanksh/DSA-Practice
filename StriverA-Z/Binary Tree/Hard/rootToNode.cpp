#include<bits/stdc++.h>

using namespace std;

struct Node{
    int key;
    Node *left , *right;
    Node(int k){
        key = k;
        left = right = NULL;
    }
};

bool rootToNode(Node *root,vector<int> &ans, int value){
    if(root==NULL){
        return false;
    }
    ans.push_back(root->key);
    if(root->key == value){
        return true;
    }
    if(rootToNode(root->left,ans,value) || rootToNode(root->right,ans,value)){
        return true;
    }
    ans.pop_back();
    return false;
}

void printAns(vector<int> ans){
    for(auto x: ans){
        cout<< x<< " ";
    }
    cout<<endl;
}

int main(){

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->left = new Node(6);
    root->left->right->right = new Node(7);

    int value = 5;

    vector<int> ans ;
    rootToNode(root,ans,value);
    printAns(ans);

    return 0;
}