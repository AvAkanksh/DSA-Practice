#include <iostream>
#include <vector>

using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};

int main()
{
    Node *root = new Node(10);
    cout<<root->data<<endl;
    cout<<"Initializing a tree"<<endl;
    return 0;
}