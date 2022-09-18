#include <iostream>
#include <vector>

using namespace std;

struct MyStack{
    int *arr;
    int cap;
    int top;
    MyStack(int c){
        cap = c;
        arr = new int[c];
        top = -1;
    }

    void push(int x){
        top++;
        arr[top] = x;
    }
    int pop(){
        int res = arr[top];
        top--;
        return res;
    }
    int peek(){
        return arr[top];
    }
    int size(){
        return top+1;
    }

    bool isEmpty(){
        return (top == -1);
    }

};

int main()
{
    MyStack s(4);
    s.push(5);
    s.push(3);
    s.push(1);
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;

    return 0;
}