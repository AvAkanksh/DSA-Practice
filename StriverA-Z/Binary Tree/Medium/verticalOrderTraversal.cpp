#include<bits/stdc++.h>

using namespace std;

struct Node{
    int key ;
    Node *left;
    Node *right;
    Node(int k){
        key = k;
        left = right = NULL;
    }
};

void printAns(map<int,vector<int>> ans){
    cout<<"------------------------"<<endl;
    for(auto x : ans){
        for(auto y : x.second){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    cout<<"------------------------"<<endl;
}

map<int, vector<int>> verticalTraversal(Node *root,int dist , map<int,vector<int>> &ans){
    if(root == NULL){
        return ans;
    }

    queue<pair<Node*,int>> q;
    pair<Node*,int> temp = {root,dist};
    q.push(temp);
    while(!q.empty()){
        pair<Node*,int> curr = q.front();
        q.pop();
        ans[curr.second].push_back(curr.first->key);
        if(curr.first->left!=NULL){q.push({curr.first->left,curr.second-1});}
        if(curr.first->right!=NULL){q.push({curr.first->right,curr.second+1});}
    }
    return ans;
}

int main(){

    Node * root = new Node(1);
    root -> left = new Node(2);
    root -> left -> left = new Node(4);
    root -> left -> right = new Node(10);
    root -> left -> left -> right = new Node(5);
    root -> left -> left -> right -> right = new Node(6);
    root -> right = new Node(3);
    root -> right -> left = new Node(9);
    root -> right -> right = new Node(10);

    map<int,vector<int>> ans;
    verticalTraversal(root,0,ans);
    printAns(ans);

    return 0;
}