#include <iostream>
#include <vector>

using namespace std;

struct Node{
    int data ;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

void traverseCLL(Node *head){

    Node *curr = head;
    do{
        cout<<curr->data<<"\t";
        curr = curr->next;
    }while(curr!=head);
    cout<<"\n";
}

Node *insertTailCLL(Node *head, int value){
    Node *temp = new Node(value);
    if(head == NULL){
        temp->next = temp;
        return temp;
    }
    else{
        temp->next = head->next;
        head->next = temp;
        temp->data = head->data;
        head->data = value;
        return temp;
    }
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = head;

    traverseCLL(head);
    head = insertTailCLL(head,99);
    traverseCLL(head);


    return 0;
}