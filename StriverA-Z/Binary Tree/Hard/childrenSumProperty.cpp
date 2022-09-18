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

void printBST(Node *root){
    if(root == NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int count = q.size();
        for(int i = 0 ; i< count ; i++){
            Node *curr = q.front();
            q.pop();
            cout<<curr->key<<" ";
            if(curr->left){q.push(curr->left);}
            if(curr->right){q.push(curr->right);}
        }
        cout<<endl;
    }
}

void modifyTreeChildProperty(Node*root){
    if(root==NULL){
        return ;
    }
    int childSum = 0;
    if(root->left){childSum+=root->left->key;}
    if(root->right){childSum+=root->right->key;}

    if(root->key > childSum){
        if(root->left){root->left->key = root->key;}
        if(root->right){root->right->key = root->key;}
    }
    else{
        root->key = childSum;
    }
    if(root->left){modifyTreeChildProperty(root->left);}
    if(root->right){modifyTreeChildProperty(root->right);}
    
    int finalAns = 0;
    if(root->left){finalAns+=root->left->key;}
    if(root->right){finalAns+=root->right->key;}
    if(root->left || root->right){root->key = finalAns;}

}

int main(){

    Node *root = new Node(2);
    root->left = new Node(13);
    root->right = new Node(5);
    root->left->left = new Node(23);    
    root->left->right = new Node(14);    
    root->right->left = new Node(7);
    root->right->right = new Node(9);
    cout<<"Before:"<<endl;
    printBST(root);
    modifyTreeChildProperty(root);
    cout<<"After:"<<endl;
    printBST(root);

    return 0;
}