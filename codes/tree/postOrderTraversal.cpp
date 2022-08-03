#include <iostream>
#include <vector>

using namespace std;

struct Node{
    int key;
    Node *left , *right;
    Node(int k){
        key = k;
        left = NULL;
        right = NULL;
    }
};

void postOrder(Node *root){
    if(root!=NULL){
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->key<<endl;
    }
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);

    postOrder(root);

    return 0;
}