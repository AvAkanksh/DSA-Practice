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

Node *insertBegin(Node *head, int value){
    Node *temp = new Node(value);
    temp->next = head;
    if(head!=NULL){
        head->prev= temp;
    }
    return temp;
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
    head = insertBegin(head,1000);
    traverse(head);

    return 0;
}