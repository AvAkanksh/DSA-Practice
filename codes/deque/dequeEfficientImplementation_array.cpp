#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void swap(vector<int> &vec, int i , int j){
    int temp = vec[i];
    vec[i] = vec[j];
    vec[j] = temp;
}

struct Deque{
    int size, cap,front;
    int *arr;
    Deque(int x){
        cap = x;
        size = 0 ;
        front = 0;
        arr = new int[cap];
    }

    void insertFront(int x){
        if(isFull()){return;}
        front = (front-1+cap)%cap;
        arr[front] = x;
        size++;
    }
    void insertRear(int x){
        if(isFull()){
            return;
        }
        int rear = (front+size-1)%cap;
        rear = (rear+1)%cap;
        arr[rear] = x;
        size++;
    }
    void deleteFront(){
        if(isEmpty()){
            return;
        }
        front = (front+1)%cap;
        size--;
    }
    void deleteRear(){
        if(isEmpty()){
            return;
        }
        int rear = getRear();
        rear = (rear-1+cap)%cap;
        size--;
    }
    int getFront(){
        if(isEmpty()){
            return -1;
        }
        return front;
    }
    int getRear(){
        if(isEmpty()){
            return -1;
        }
        return (front + size -1) % cap;
    }
    int getsize(){
        return size;
    }
    bool isFull(){
        return (size == cap);
    }
    bool isEmpty(){
        return (size==0);
    }
};

int main()
{

    Deque dq(10);
    dq.insertFront(1);
    cout<<"Front : "<<dq.getFront()<<"\t";
    cout<<"Rear  : "<<dq.getRear()<<endl;
    dq.insertFront(2);
    cout<<"Front : "<<dq.getFront()<<"\t";
    cout<<"Rear  : "<<dq.getRear()<<endl;
    dq.insertFront(3);
    cout<<"Front : "<<dq.getFront()<<"\t";
    cout<<"Rear  : "<<dq.getRear()<<endl;
    dq.insertFront(4);
    cout<<"Front : "<<dq.getFront()<<"\t";
    cout<<"Rear  : "<<dq.getRear()<<endl;
    dq.deleteFront();
    cout<<"Front : "<<dq.getFront()<<"\t";
    cout<<"Rear  : "<<dq.getRear()<<endl;
    dq.deleteFront();
    cout<<"Front : "<<dq.getFront()<<"\t";
    cout<<"Rear  : "<<dq.getRear()<<endl;
    dq.deleteRear();
    cout<<"Front : "<<dq.getFront()<<"\t";
    cout<<"Rear  : "<<dq.getRear()<<endl;
    dq.deleteRear();
    cout<<"Front : "<<dq.getFront()<<"\t";
    cout<<"Rear  : "<<dq.getRear()<<endl;
    dq.insertRear(5);
    cout<<"Front : "<<dq.getFront()<<"\t";
    cout<<"Rear  : "<<dq.getRear()<<endl;

    return 0;
}