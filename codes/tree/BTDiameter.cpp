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

int dia = 0;

int BTdiameter(Node *root){
    if(root == NULL){return 0;}
    int lh = BTdiameter(root->left);
    int rh = BTdiameter(root->right);
    int res = 1+lh+rh;
    dia = max(dia,res);
    return 1+max(lh,rh);
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
    root->left->left->left = new Node(8);
    root->left->left->right = new Node(9);
    root->left->right->left = new Node(10);
    root->left->right->right = new Node(11);
    root->right->left->left = new Node(12);
    root->right->left->right = new Node(13);
    root->right->right->left = new Node(14);
    root->right->right->right = new Node(15);

    //                  1
    //            /          \
    //           2            3
    //          /  \       /     \
    //         4    5     6       7
    //        /\   / \   /  \    /  \
    //       8  9 10 11 12  13  14  15
    cout<<dia<<endl;
    BTdiameter(root);
    cout<<dia<<endl;


    return 0;
}