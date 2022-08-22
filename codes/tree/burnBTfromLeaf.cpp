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

int res = 0;

int burnTime(Node *root, int leaf, int &dist){
    if(root ==NULL){return 0;}
    if(root->key == leaf){dist=0;return 1;}
    int ldist = -1;
    int rdist = -1;
    cout<<"Entering left::"<<endl;
    int lh = burnTime(root->left,leaf,ldist);
    cout<<"Exiting left::"<<endl;
    cout<<"Entering right::"<<endl;
    int rh = burnTime(root->right,leaf,rdist);
    cout<<"Exiting right::"<<endl;
    cout<<"-------------"<<endl;
    cout<<"key : "<<root->key<<endl;
    cout<<"ldist : "<<ldist<<endl;
    cout<<"rdist : "<<rdist<<endl;
    cout<<"lh : "<<lh<<endl;
    cout<<"rh : "<<rh<<endl;

    if(ldist != -1){
        dist = ldist +1;
        res = max (res , dist + rh);
    }
    else if(rdist != -1){
        dist = rdist +1;
        res = max (res , dist + lh);
    }
    cout<<"dist : "<<dist<<endl;
    cout<<"-------------"<<endl;
    return (max(lh , rh) +1);
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
    int leaf = 12;
    int distance = -1;
    burnTime(root,leaf,distance);
    cout<<"Time taken to burn the Binary tree given the leaf node ("<<leaf<<") is : "<<res<<endl;

    return 0;
}