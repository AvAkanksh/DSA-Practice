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

void traverseCLL(Node *head){
    if(head == NULL){
        return;
    }
    Node *curr = head;
    do{
        cout<<curr->data<<"\t";
        curr = curr->next;
    }while(curr != head);
    cout<<"\n";
}

Node *deleteHeadCLL(Node *head){
    if(head == NULL){
        return NULL;
    }
    else if(head->next == head){
        delete head;
        return NULL;
    }
    else{
        head->data = head->next->data;
        Node *temp = head->next;
        head->next = head->next->next;
        delete temp;
        return head;

    }
}

Node *deleteKth(Node *head,int k){
    if(head==NULL){
        return NULL;
    }
    else if(k == 1){
        return deleteHeadCLL(head);
    }
    else{
        Node *curr = head;
        for(int i = 0; i < k-2; i++){
            curr = curr->next;
        }
        Node *temp = curr->next;
        curr->next = curr->next->next;
        delete temp;
        return head;
    }
}

int main()
{
    Node *head1 = NULL;
    Node *head2 = new Node(100);
    head2->next = head2;
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = head;

    traverseCLL(head);
    head = deleteHeadCLL(head);
    traverseCLL(head);
    head = deleteKth(head,2);
    traverseCLL(head);



    return 0;
}