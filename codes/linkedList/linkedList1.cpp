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


void printList(Node *head){
    // Node *curr = head;
    while(head!=NULL){
        cout<<(head->data)<<" "<<endl;
        head  = head->next;
    }
}

int main(){
Node *head = new Node(10);
head->next = new Node(20);
head->next->next = new Node(30);
head->next->next->next = new Node(40);
printList(head);
printList(head);
return 0;



return 0 ;
}