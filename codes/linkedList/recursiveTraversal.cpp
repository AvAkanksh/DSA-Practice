#include <iostream>
#include <vector>

using namespace std;

// NOTE:
// Iterative Method is preferred over recursive traversal because recursive traversal will take up Auxilary Space, whereas
// iterative method doesn't use any auxilary space.


struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

void recursivePrintlist(Node *head){
    if(head==NULL){
        return;
    }
    cout<<head->data<<endl;
    recursivePrintlist(head->next);
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    recursivePrintlist(head);

    return 0;
}