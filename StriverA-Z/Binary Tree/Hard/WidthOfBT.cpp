#include<bits/stdc++.h>

using namespace std;

struct Node{
    int key;
    Node *left , *right ;
    Node(int k){
        key = k;
        left = right = NULL;
    }
};

int maxWidth(Node *root){
    if(root== NULL){
        return 0;
    }
    int ans = 0;
    queue<pair<Node*,int>> q;
    q.push({root,0});
    while(!q.empty()){
        int count = q.size();
        int curMin = q.front().second;
        int leftmost, rightmost;
        for(int i = 0 ; i< count ; i++){
            int curr_id = q.front().second -curMin;
            Node *temp = q.front().first;
            q.pop();
            if(i==0){leftmost = curr_id;}
            if(i==count-1){rightmost = curr_id;}
            if(temp->left){q.push({temp->left,2*curr_id+1});}
            if(temp->right){q.push({temp->right,2*curr_id+2});}
        }
        ans = max(ans,rightmost-leftmost+1);
    }
    return ans;
}

int main(){

    Node *root = new Node(1);
    root->left = new Node(1);  
    root->left->left = new Node(1);  
    root->left->left->left = new Node(1);  
    root->right = new Node(1);  
    root->right->right = new Node(1);
    root->right->right->right = new Node(1);  

    cout<<"Maximum Width of the Binary Tree : "<<maxWidth(root)<<endl;
    
    return 0;
}