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


void rprint(Node *head){
    if(head==NULL){return;}
    cout<<head->data<<" ";
    rprint(head->next);
}

int main(){
Node *head = new Node(10);
head->next = new Node(20);
head->next->next = new Node(30);
head->next->next->next = new Node(40);

rprint(head);

return 0 ;
}