#include <iostream>
#include <vector>
#include <stack>


using namespace std;

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    s.push(80);

    cout<<s.top()<<endl;
    cout<<s.size()<<endl;

    while(s.empty() == false){
        cout<<s.top()<<"\t";
        s.pop();
    }
    cout<<"\n";
    return 0;
}