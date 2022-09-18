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

vector<int> leftView(Node *root){
    vector<int> ans;
    if(root == NULL){
        return ans;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int count = q.size();
        for(int i = 0 ; i< count ; i++){
            Node *curr = q.front();
            q.pop();
            if(i == 0 ){
                ans.push_back(curr->key);
            }
            if(curr->left){q.push(curr->left);}
            if(curr->right){q.push(curr->right);}
        }
        
    }
    return ans;
}

vector<int> rightView(Node *root){
    vector<int> ans;
    if(root == NULL){
        return ans;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int count = q.size();
        for(int i = 0 ; i< count ; i++){
            Node *curr = q.front();
            q.pop();
            if(i == 0 ){
                ans.push_back(curr->key);
            }
            if(curr->right){q.push(curr->right);}
            if(curr->left){q.push(curr->left);}
        }
        
    }
    return ans;
}

int main(){

    Node *root = new Node(1);
    root->left = new Node(2);  
    root->right = new Node(3);  
    root->right->right = new Node(7);  
    root->left->left = new Node(4);  
    root->left->right = new Node(5);  
    root->left->right->left = new Node(6);  

    vector<int> lView = leftView(root);
    for(auto x: lView){
        cout<<x<<" ";
    }
    cout<<endl;
    vector<int> rView = rightView(root);
    for(auto x: rView){
        cout<<x<<" ";
    }
    cout<<endl;
    
    return 0;
}