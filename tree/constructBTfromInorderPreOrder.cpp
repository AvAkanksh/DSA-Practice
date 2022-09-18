#include <iostream>
#include <vector>

using namespace std;

struct Node{
    int key ;
    Node *left, *right;
    Node(int k ){
        key = k;
        left = NULL;
        right = NULL;
    }
};

vector<int> inorder;
vector<int> preorder;

void inorderBT(Node *root){
    if(root == NULL){ return ;}
    inorderBT(root->left);
    inorder.push_back(root->key);
    inorderBT(root->right);
}

void preorderBT(Node *root){
    if(root == NULL){ return ;}
    preorder.push_back(root->key);
    preorderBT(root->left);
    preorderBT(root->right);
}

void display(vector<int> vec){
    for(int i = 0 ; i < int(vec.size()); i++){
        cout<<vec[i]<<"\t";
    }
    cout<<""<<endl;
}

int preindex = 0;

Node *constructBT(vector<int> inorder,vector<int> preorder,int is,int ie){
    if(is>ie){return NULL;}
    Node *root = new Node(preorder[preindex++]);
    int inIndex;
    for(int i = is ; i <= ie;i++ ){
        if(root->key == inorder[i]){
            inIndex = i;
            break;
        }
    }
    root->left = constructBT(inorder,preorder,is,inIndex-1);
    root->right = constructBT(inorder,preorder,inIndex+1,ie);
    return root;
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

//                                  1
//                              2       3
//                            4   5   6   7
//Inorder : 4 2 5 1 6 3 7
//preOrder : 1 2 4 5 3 6 7

    inorderBT(root);
    display(inorder);
    preorderBT(root);
    display(preorder);

    Node *constructedRoot = constructBT(inorder,preorder,0,6);
    while(inorder.size()!=0){
        inorder.pop_back();
        preorder.pop_back();
    }
    inorderBT(root);
    display(inorder);
    preorderBT(root);
    display(preorder);



    return 0;
}