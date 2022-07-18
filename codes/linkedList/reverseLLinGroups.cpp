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

void traverseLL(Node *head){
    while(head!=NULL){
        cout<<head->data<<"\t";
        head = head->next;
    }
    cout<<"\n";
}

Node *reverseInGroups(Node *head, int k){
    if(head== NULL){
        return head;
    }
    Node *curr = head;
    int count = 0;
    Node *prev = NULL;

    while(curr!=NULL && count<k){
        Node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    Node *rest_head = reverseInGroups(curr,k);
    head->next = rest_head;
    return prev;
}

int main()
{
    int k = 3;
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);
    head->next->next->next->next->next->next = new Node(7);
    head->next->next->next->next->next->next->next = new Node(8);

    traverseLL(head);

    head = reverseInGroups(head,k);
    traverseLL(head);

    return 0;
}