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

void leftView2(Node *root){
    cout<<"Left View of the Tree Method 2(Iterative Method) :"<<endl;
    if(root == NULL){return;}
    queue<Node*> q;
    q.push(root);
    while(!(q.empty())){
        int count = q.size();
        for(int i = 0 ; i<count; i++){
            Node *curr = q.front();
            q.pop();
            if(i == 0){
                cout<< curr->key<<endl;
            }
            if(curr->left != NULL){q.push(curr->left);}
            if(curr->right != NULL){q.push(curr->right);}
        }
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

    cout<<"Level Order each Node on each line:"<<endl;
    levelOrder(root);

    cout<<"Level Order Traversal each row of tree on each line:"<<endl;
    levelOrderlbl(root);

    cout<<"Level Order Traversal each row of tree on each line (METHOD 2):"<<endl;
    levelOrderlbl2(root);

    cout<<"The maximum element in the tree is : "<<maximumNode(root)<<endl;

    leftView(root);
    leftView2(root);

    return 0;
}