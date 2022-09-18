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

int height(Node *root){
    if(root==NULL){
        return 0;
    }
    return max(height(root->left),height(root->right))+1;
}

void printNodeK(Node *root,int k){
    if(root == NULL){
        return;
    }
    else if(k == 0){
        cout<<root->key<<endl;
    }
    else{
        printNodeK(root->left, k-1);
        printNodeK(root->right, k-1);
    }
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->left->right->left = new Node(60);
    root->left->right->left->left = new Node(70);
    root->left->right->left->right = new Node(80);

    cout<<height(root)<<endl;
    int k = 1;
    printNodeK(root,k);

    return 0;
}