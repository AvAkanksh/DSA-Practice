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

Node *insertAt(Node *head, int pos, int value){
    Node *temp = new Node(value);
    if(pos == 0){
        temp->next = head;
        return temp;
    }
    Node *curr = head;
    for(int i = 0 ; i <=pos -2 && curr != NULL;i++){
        curr= curr->next;
    }
    if(curr == NULL){
        return head;
    }
    temp->next = curr->next;
    curr->next = temp;

    return head;
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
    head = insertAt(head,2,99);
    traverse(head);
    return 0;
}