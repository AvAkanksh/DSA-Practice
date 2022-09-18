#include <iostream>
#include <vector>

using namespace std;

struct Node{
    int key;
    Node *left, *right;
    Node(int x){
        key = x;
        left = NULL;
        right = NULL;
    }
};

bool search (Node *root, int x){
    if(root == NULL){
        return false;
    }
    else if(root->key == x){
        return true;
    }
    else if(root->key > x){
        return search(root->left,x);
    }
    else{
        return search(root->right, x);
    }
}

bool searchIter(Node *root, int x){
    while(root!=NULL){
        if(root->key == x){
            return true;
        }
        else if(root->key >x){
            root = root->left;
        }
        else{
            root= root->right;
        }
    }
    return false;
}


int main()
{


    return 0;
}