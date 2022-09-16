#include<bits/stdc++.h>

using namespace std;

struct Node{
    int key;
    Node *left;
    Node *right;
    Node(int k ){
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
    Node *parent = NULL;
    while(curr != NULL){
        parent = curr;
        if(curr->key > k){
            curr = curr->left;
        }else{
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

int pathSum(Node* root, int &maxSum){
    if(root == NULL){
        return 0;
    }
    int lsum = pathSum(root->left,maxSum);
    int rsum = pathSum(root->right,maxSum);

    maxSum = max(maxSum,root->key + lsum + rsum);
    return max(lsum,rsum) + root->key;

}

int maxPathSum(Node* root){
    int maxSum = INT_MIN;
    pathSum(root,maxSum);
    return maxSum;
}

void test(Node*root){
    cout<<"HI"<<endl;
}


int main(){

    Node *root = new Node(-10);
    root->left = new Node(9);
    root->right = new Node(20);
    root->right->left = new Node(15);
    root->right->right = new Node(7);

    cout<<maxPathSum(root)<<endl;


    return 0;
}