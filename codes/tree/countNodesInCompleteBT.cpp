#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

struct Node{
    int key;
    Node *left, *right;
    Node(int k){
        key = k;
        left = right = NULL;
    }
};

int countNodes(Node *root){
    if (root == NULL ){return 0;}
    int lh = 0;
    int rh = 0;
    Node *curr = root;
    while(curr!= NULL){
        lh++;
        curr= curr->left;
    }
    curr = root;
    while(curr!= NULL){
        rh++;
        curr= curr->right;
    }
    if(lh == rh){
        return pow(2,lh) -1;
    }
    else {
        return 1 + countNodes(root->left) + countNodes(root->right);
    }

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
    // root->right->left->right = new Node(13);
    // root->right->right->left = new Node(14);
    // root->right->right->right = new Node(15);
    //                  1
    //            /          \
    //           2            3
    //          /  \       /     \
    //         4    5     6       7
    //        /\   / \   /  \    /  \
    //       8  9 10 11 12  13  14  15
    cout<<countNodes(root)<<endl;

    return 0;
}