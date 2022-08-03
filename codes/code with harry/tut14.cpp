#include <iostream>
#include <vector>

using namespace std;

struct node{
    int data;
    node(int x){
        data = x;
    }
};

int main()
{
    node head(10);
    cout<<head.data<<endl;
    cout<<head.data<<endl;
    cout<<head.data<<endl;
    return 0;
}