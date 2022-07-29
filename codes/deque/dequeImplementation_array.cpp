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
    int size, cap;
    int *arr;
    Deque(int x){
        cap = x;
        size = 0 ;
        arr = new int[cap];
    }

    void insertFront(int x){
        if(isFull()){return;}
        for(int i = size-1; i >= 0 ; i--){
            arr[i+1] = arr[i];
        }
        arr[0] = x;
        size++;
    }
    void insertRear(int x){
        if(isFull()){
            return;
        }
        arr[size]=x;
        size++;
    }
    void deleteFront(){
        if(isEmpty()){
            return;
        }
        for(int i = 1 ; i <=size-1; i++){
            arr[i-1] = arr[i];
        };
        size--;
    }
    void deleteRear(){
        if(isEmpty()){
            return;
        }
        size--;
    }
    int getFront(){
        if(isEmpty()){
            return -1;
        }
        return 0;
    }
    int getRear(){
        if(isEmpty()){
            return -1;
        }
        return size-1;
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


    return 0;
}