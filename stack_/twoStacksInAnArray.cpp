#include <iostream>
#include <vector>
#include <stack>

using namespace std;

struct twoStacks{
    int *arr,cap,top1,top2;
    twoStacks(int n){
        cap = n;
        top1 = -1;
        top2 = cap;
        arr = new int[n];
    }
    void push1(int x){
        if(top1<top2-1){
            top1++;
            arr[top1] = x;
        }
    }
    void push2(int x){
        if(top1<top2-1){
            top2--;
            arr[top2] = x;
        }
    }
    int pop1(){
        if(top1>=0){
            int x = arr[top1];
            top1--;
            return x;
        }
        else{
            exit(1);
        }
    }
    int pop2(){
        if(top2<cap){
            int x = arr[top2];
            top2++;
            return x;
        }
        else{
            exit(1);
        }
    }
};

int main()
{
    twoStacks t(10);
    t.push1(10);
    t.push2(20);
    t.push1(30);
    t.push2(40);
    t.push1(50);
    t.push2(60);
    t.push2(70);
    t.push2(80);

    while(t.top1>=0){
        cout<<"stack 1 :"<<t.pop1()<<endl;
    }
    while(t.top2<t.cap){
        cout<<"stack 2 :"<<t.pop2()<<endl;
    }

    return 0;
}