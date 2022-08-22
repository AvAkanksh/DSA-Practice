#include <iostream>
#include <vector>

using namespace std;

struct Node{
    int key;
    Node *left, *right;
    Node(int k ){
        key = k;
        left = NULL;
        right = NULL;
    }
};

bool findpath(Node *root , vector<Node*> &path , int n ){
    if(root == NULL){return false;}
    path.push_back(root);
    if(root->key == n){
        return true;
    }
    if(findpath(root->left,path,n)||findpath(root->right,path,n)){
        return true;
    }
    path.pop_back();
    return false;
}


Node *findLCA (Node *root, int n1 , int n2){
    if(root == NULL){return NULL;}
    vector<Node*> path1;
    vector<Node*> path2;
    if(!(findpath(root,path1,n1)) || !(findpath(root,path2,n2))){
        return NULL;
    }
    cout<<"HI"<<endl;
    int i;
    for(i = 0 ; (i < (path1.size()-1)) && (i<(path2.size()-1)) ; i++){
        if(path1[i+1]!=path2[i+1]){
            break;
        }
    }
    return path1[i];
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
    int n2 = 4;

    Node *lca = findLCA(root, n1, n2);
    if(lca!=NULL){
        cout<<lca->key<<endl;
    }
    else{
        cout<<"The entered values for n1 and n2 are not present in the Binary Tree!"<<endl;
    }

    return 0;
}