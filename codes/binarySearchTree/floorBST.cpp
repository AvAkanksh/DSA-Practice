#include <iostream>
#include <vector>

using namespace std;

struct Node{
    int key ;
    Node *left , *right;
    Node(int x){
        key = x;
        left = right = NULL;
    }
};

Node *findFloor(Node *root, int x){
    Node *res = NULL;
    if(root == NULL){
        return NULL;
    }
    while(root!=NULL){
        if(root->key == x){
            return root;
        }
        else if(root->key >x){
            root = root->left;
        }
        res = root;
        root = root->right;
    }
    return res;
}


int main()
{
    Node *root = new Node(50);
    root->left = new Node(30);
    root->right = new Node(70);
    

    return 0;
}