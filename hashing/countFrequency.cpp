#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

void printFreq(vector<int> vec){
    unordered_map<int,int> m;
    for(int x : vec){
        m[x]++;
    }
    for(auto e : m){
        cout<<e.first<<" - "<<e.second<<endl;
    }
    cout<<"------"<<endl;
    for(auto it = m.begin(); it != m.end();it++){
        cout<<it->first<<" - "<<it->second<<endl;
    }
}

int main()
{
    vector<int> vec = {1,2,3,4,5,6,3,2,4,1,3,4,2,5,4,3,1};
    printFreq(vec);

    return 0;
}