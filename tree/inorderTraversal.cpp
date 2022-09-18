#include <iostream>
#include <vector>

using namespace std;

struct Node{
    int key;
    Node *left,*right;
    Node(int k){
        key = k;
        left = NULL;
        right = NULL;
    }

};

void inorderTraverse(Node *root){
    if(root!=NULL){
        inorderTraverse(root->left);
        cout<<root->key<<endl;
        inorderTraverse(root->right);
    }
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);

    inorderTraverse(root);

    return 0;
}