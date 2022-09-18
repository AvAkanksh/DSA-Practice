#include <iostream>
#include <vector>
#include <queue>
#include <stack>

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

void spiralTraverse(Node *root){
    if(root == NULL){return ;}
    queue<Node*> q;
    stack<int> s;
    int row = 0;
    q.push(root);
    while(!(q.empty())){

        int count = q.size();
        for (int i = 0; i < count; i++)
        {
            Node *curr = q.front();
            q.pop();
            if(row%2==0){
                cout<<curr->key<<" ";
            }
            else{
                s.push(curr->key);
            }
            if(curr->left != NULL){q.push(curr->left);}
            if(curr->right != NULL){q.push(curr->right);}
        }
        if(row%2==1){
            while(!(s.empty())){
            cout<<s.top()<<" ";
            s.pop();
            }
        }
        cout<<endl;
        row++;

    }

}

void spiralTraverse2(Node* root){
    if(root==NULL){return;}
    stack<Node*> s1;
    stack<Node*> s2;
    s1.push(root);
    int row = 0;
    while(!(s1.empty()) || !(s2.empty())){
        if(row%2 == 0){
            while(!(s1.empty())){
                Node *curr = s1.top();
                s1.pop();
                cout<<curr->key<<" ";
                if(curr->left!=NULL){s2.push(curr->left);}
                if(curr->right!=NULL){s2.push(curr->right);}
            }
        }
        else{
            while(!(s2.empty())){
                Node *curr = s2.top();
                s2.pop();
                cout<<curr->key<<" ";
                if(curr->right!=NULL){s1.push(curr->right);}
                if(curr->left!=NULL){s1.push(curr->left);}
            }
        }
        row++;
        cout<<endl;
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

    spiralTraverse(root);
    cout<<"-------"<<endl;
    spiralTraverse2(root);

    return 0;
}