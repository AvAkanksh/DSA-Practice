#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
    // set<int> s;
    set<int,greater<int>> s;
    s.insert(10);
    s.insert(3);
    s.insert(12);
    s.insert(4);
    s.insert(11);
    for(auto it = s.begin(); it != s.end(); it++){
        cout<<*it<<endl;
    }

    return 0;
}