#include <iostream>
#include <vector>

using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

Node *insertBegin(Node *head,int x){
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}

void traversal(Node *head){
    while(head!=NULL){
        cout<<head->data<<endl;
        head=head->next;
    }
}

int main()
{
    Node *head = NULL;
    
    head = insertBegin(head,40);
    head = insertBegin(head,30);
    head = insertBegin(head,20);
    head = insertBegin(head,10);

    traversal(head);

    return 0;
}