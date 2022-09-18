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


Node *findLCA(Node *root, int n1, int n2){
    if(root == NULL){return NULL;}
    if(root->key == n1 || root->key == n2){
        return root;
    }
    Node *lca1  = findLCA(root->left, n1 , n2);
    Node *lca2  = findLCA(root->right, n1 , n2);

    if(lca1!= NULL && lca2!=NULL){
        return root;
    }
    else if(lca1 != NULL){
        return lca1;
    }
    else{
        return lca2;
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
    int n1 = 4;
    int n2 = 13;

    Node *lca = findLCA(root, n1, n2);
    if(lca!=NULL){
        cout<<"The LCA of "<<n1 <<" and "<<n2<<" is : "<<lca->key<<endl;
    }
    else{
        cout<<"The entered values for n1 and n2 are not present in the Binary Tree!"<<endl;
    }
    return 0;
}