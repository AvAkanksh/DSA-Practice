#include <iostream>
#include <vector>

using namespace std;

struct Node{
    int key;
    Node *left, *right;
    Node(int k){
        key = k;
        left = NULL;
        right = NULL;
    }
};

void traverse(Node *root){
    while(root!=NULL){
        cout<<root->key<<endl;
        root = root->right;
    }
}

Node *previous = NULL;
Node *head = NULL;

void bt2dll(Node *root){
    if(root == NULL){return;}
    bt2dll(root->left);
    if(previous== NULL){head = root;}
    else{
        root->left = previous;
        previous->right = root;
    }
    previous = root;
    bt2dll(root->right);
}


int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
//                      1
//                  2       3
//                4   5   6   7
//
    bt2dll(root);

    traverse(head);

    return 0;
}