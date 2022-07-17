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

Node *insertEnd(Node *head, int x){
    Node *temp = new Node(x);
    if(head==NULL){
        return temp;
    }
    else{
        Node *curr = head;
        while(curr->next != NULL){
            curr= curr->next;
        }
        curr->next = temp;
        return head;
    }
}

void traverse(Node *head){
    while(head!=NULL){
        cout<<head->data<<"\t";
        head = head->next;
    }
    cout<<"\n";
}

Node *deleteHead(Node *head){
    if(head == NULL){
        return NULL;
    }
    else{
        Node *temp = head->next;
        delete head;
        return temp;
    }
}

Node *deleteTail(Node *head){
    if(head == NULL){
        return NULL;
    }
    else if(head->next == NULL){
        delete head;
        return NULL;
    }
    else{
        Node *curr = head;
        while(curr->next->next!=NULL){
            curr = curr->next;
        }
        delete curr->next;
        curr->next = NULL;
        return head;
    }
}

int main()
{
    Node *head = NULL;
    head = insertEnd(head,10);
    head = insertEnd(head,20);
    head = insertEnd(head,30);
    head = insertEnd(head,40);
    head = insertEnd(head,50);

    traverse(head);
    head = deleteHead(head);
    traverse(head);
    head = deleteTail(head);
    traverse(head);

    return 0;
}