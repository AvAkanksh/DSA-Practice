#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// Title of the Program

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

void printList(Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

int main(){

Node *head = NULL;
head = insertBegin(head,30);
head = insertBegin(head,20);
head = insertBegin(head,10);
head = insertBegin(head,0);

printList(head);


return 0 ;
}