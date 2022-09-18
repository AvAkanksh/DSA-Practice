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

void traverse(Node *head){
    Node *curr = head;
    while(curr!=NULL){
        cout<<curr->data<<"\t";
        curr = curr->next;
        if(curr == head){
            break;
        }
    }
    cout<<"\n";
}

int main()
{
    Node *head = new Node(10);
    head->next = head;

    // head->next = new Node(20);
    // head->next->next = new Node(30);
    // head->next->next->next = new Node(40);
    // head->next->next->next->next = head;
    traverse(head);
    return 0;
}