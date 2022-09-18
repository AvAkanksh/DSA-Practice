#include <iostream>
#include <vector>

using namespace std;

struct Node{
    int key ;
    Node *left, *right;
    Node(int k){
        key = k;
        left = NULL;
        right = NULL;
    }
};

void preOrderTraversal(Node *root){
    if(root!=NULL){
        cout<<root->key<<endl;
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);

    preOrderTraversal(root);

    return 0;
}