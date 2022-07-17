#include <iostream>
#include <vector>

using namespace std;

struct Node{
    int data;
    Node *prev;
    Node *next;
    Node(int x){
        data = x;
        prev = NULL;
        next = NULL;
    }
};

void traverse(Node *head){
    while(head!=NULL){
        cout<<head->data<<"\t";
        head = head->next;
    }
    cout<<"\n";
}

Node *insertEnd(Node *head, int value){
    Node *temp = new Node(value);
    if(head == NULL){
        return temp;
    }
    Node *curr = head;
    while(curr->next != NULL){
        curr =  curr->next;
    }
    temp->prev = curr;
    curr->next = temp;
    return head;
}

Node *reverseDLL(Node *head){
    if(head==NULL || head->next == NULL){return  head;}
    Node *curr = head;
    while(curr != NULL){
        if(curr->next ==NULL){
            head = curr;
        }
        Node *temp = curr->prev ;
        curr->prev = curr->next;
        curr->next = temp;
        curr = curr->prev;
    }
    return head;
}

Node *deleteHeadDLL(Node *head){
    if(head == NULL){
        return head;
    }
    else if(head->next == NULL){
        delete head;
        return NULL;
    }
    else{
        Node *temp = head->next;
        temp->prev = NULL;
        delete head;
        return temp;
    }

}

int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;

    traverse(head);
    head = insertEnd(head,101);
    traverse(head);
    head = reverseDLL(head);
    traverse(head);
    head = deleteHeadDLL(head);
    traverse(head);

    return 0;
}