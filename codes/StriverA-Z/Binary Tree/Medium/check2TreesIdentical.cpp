#include<bits/stdc++.h>

using namespace std;

struct Node{
    int key ;
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
    Node *parent = NULL;
    while(curr!=NULL){
        parent = curr;
        if(curr->key>k){
            curr = curr->left;
        }
        else{
            curr = curr->right;
        }
    }
    if(parent->key>k){
        parent->left = temp;
    }
    else{
        parent->right = temp;
    }
    return root;
}

void printTreeBFS(Node *root){
    if(root == NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int count = q.size();
        for(int i = 0 ; i< count ; i++){
            Node *curr = q.front();
            cout<<curr->key << " ";
            q.pop();
            if(curr->left != NULL){q.push(curr->left);}
            if(curr->right != NULL){q.push(curr->right);}
        }
        cout<<endl;
    }
}

bool checkifSame(Node* root1 , Node *root2){
    if(root1 == NULL || root2 == NULL){
        return (root1 == root2);
    }
    return ((root1->key == root2->key)&&checkifSame(root1->left,root2->left)&&checkifSame(root1->right,root2->right));
}

int main(){

    Node *root = NULL;
    root = Insert(root,5);
    root = Insert(root,7);
    root = Insert(root,6);
    root = Insert(root,1);
    root = Insert(root,2);
    root = Insert(root,9);
    // root = Insert(root,8);
    root = Insert(root,11);
    root = Insert(root,18);
    root = Insert(root,10);
    root = Insert(root,16);
    root = Insert(root,14);

    printTreeBFS(root);

    Node *root2 = NULL;
    root2 = Insert(root2,5);
    root2 = Insert(root2,7);
    root2 = Insert(root2,6);
    root2 = Insert(root2,1);
    root2 = Insert(root2,2);
    root2 = Insert(root2,8);
    root2 = Insert(root2,9);
    root2 = Insert(root2,11);
    root2 = Insert(root2,18);
    root2 = Insert(root2,10);
    root2 = Insert(root2,16);
    root2 = Insert(root2,14);

    if(checkifSame(root,root2)){
        cout<<"Both the Trees are Same!"<<endl;
    }
    else{
        cout<<"Both the Trees are Different!"<<endl;
    }


    return 0;
}