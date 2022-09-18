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

Node *removeDuplicatesLL(Node *head){
    Node *curr = head;
    while(curr!=NULL && curr->next !=NULL)
    {
        if(curr->data == curr->next->data){
            Node *temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
        }
        else{
            curr= curr->next;
        }
    }
    return head;
}


int main()
{
    Node *head = new Node(1);
    head->next = new Node(1);
    head->next->next = new Node(2);
    head->next->next->next = new Node(2);
    head->next->next->next->next = new Node(2);
    head->next->next->next->next->next = new Node(2);
    head->next->next->next->next->next->next = new Node(3);
    head->next->next->next->next->next->next->next = new Node(3);
    traverseLL(head);
    head = removeDuplicatesLL(head);
    traverseLL(head);

    return 0;
}