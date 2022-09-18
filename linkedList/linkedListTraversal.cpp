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

void traversal(Node *head){
    Node *curr = head;
    while(curr!=NULL){
        cout<<curr->data<<endl;
        curr = curr->next;
    }
}

void traversal2(Node *head){
    while(head!=NULL){
        cout<<head->data<<endl;
        head=head->next;
    }
}


int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    traversal(head);
    traversal2(head);

    return 0;
}