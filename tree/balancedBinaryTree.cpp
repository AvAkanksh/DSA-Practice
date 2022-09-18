#include <iostream>
#include <vector>
#include <queue>
#include <bits/stdc++.h>


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


void levelOrder(Node *root){
    if(root == NULL){return;}
    queue<Node*> q;
    q.push(root);
    while(!(q.empty())){
        Node *curr = q.front();
        q.pop();
        cout<<curr->key<<endl;
        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL){
            q.push(curr->right);
        }
    }
}


void levelOrderlbl(Node *root){
    if(root == NULL){return;}
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(q.size()>1){
        Node *curr = q.front();
        q.pop();
        if(curr == NULL){
            cout<<endl;
            q.push(NULL);
            continue;
        }
        cout<<curr->key<<" ";
        if(curr->left !=NULL){
            q.push(curr->left);
        }
        if(curr->right !=NULL){
            q.push(curr->right);
        }
    }
    cout<<endl;
}

void levelOrderlbl2(Node *root){
    if(root == NULL){return;}
    queue<Node*> q;
    q.push(root);
    while((!q.empty())){
        int count = q.size();
        for(int i = 0 ; i< count;i++){
            Node *curr = q.front();
            q.pop();
            cout<<curr->key<<" ";
            if(curr->left != NULL){q.push(curr->left);}
            if(curr->right != NULL){q.push(curr->right);}
        }
        cout<<endl;
    }
}

int maximumNode(Node *root){
    if(root ==  NULL){
        return INT_MIN;
    }
    else{
        return max(root->key,max(maximumNode(root->left),maximumNode(root->right)));
    }
}

void printleft(Node *root , int level, int &maxlevel){
    if(root == NULL){return;}
    if(maxlevel < level){
        cout<<root->key<<endl;
        maxlevel = level;
    }
    printleft(root->left,level+1,maxlevel);
    printleft(root->right,level+1,maxlevel);
}

void leftView(Node *root){
    int maxlevel = 0 ;
    cout<<"Left View of the Tree :"<<endl;
    printleft(root,1,maxlevel);
}

bool childrenSum(Node *root){
    if(root == NULL || ((root->left == NULL) && (root->right==NULL))){
        return true;
    }
    int sum = 0 ;
    if(root->left != NULL){sum += root->left->key;}
    if(root->right != NULL){sum += root->right->key;}
    return (((root->key)==sum )&&(childrenSum(root->left))&&(childrenSum(root->right)));
}

int balancedBT(Node *root){
    if(root == NULL){return 0;}
    int left_height = balancedBT(root->left);
    if(left_height == -1){return -1;}
    int right_height = balancedBT(root->right);
    if(right_height == -1){return -1;}
    if(abs(left_height - right_height)>1){return -1;}
    else{
        return max(left_height,right_height) + 1;
    }
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(300);

    root->left->right = new Node(40);
    root->left->right->left = new Node(50);
    root->left->right->right = new Node(60);

    root->left->left = new Node(70);
    root->left->left->left = new Node(80);
    root->left->left->right = new Node(90);

    root->right->right = new Node(100);
    root->right->right->left = new Node(110);
    root->right->right->right = new Node(120);

    root->right->left = new Node(130);
    root->right->left->left = new Node(140);
    root->right->left->right = new Node(150);

    // cout<<"Level Order each Node on each line:"<<endl;
    // levelOrder(root);

    // cout<<"Level Order Traversal each row of tree on each line:"<<endl;
    // levelOrderlbl(root);

    // cout<<"Level Order Traversal each row of tree on each line (METHOD 2):"<<endl;
    // levelOrderlbl2(root);

    // cout<<"The maximum element in the tree is : "<<maximumNode(root)<<endl;

    // leftView(root);

    // cout<<"The give Tree is having children sum property or not ? "<<childrenSum(root)<<endl;

    if(balancedBT(root)!=-1){
        cout<<"The given Binary Tree is Balanced !"<<endl;
    }
    else{
        cout<<"The given Binary Tree is NOT Balanced !"<<endl;

    }

    return 0;
}