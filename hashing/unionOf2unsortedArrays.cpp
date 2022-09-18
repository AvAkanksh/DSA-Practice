#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int unionOf2Arrays(vector<int> vec1, vector<int> vec2){
    unordered_set <int> s;
    for(auto x : vec1){
        s.insert(x);
    }
    for(auto x : vec2){
        s.insert(x);
    }
    return s.size();
}

int main()
{
    vector<int> vec1 = {1,2,3,4,5,6,7,5,4,3,3,2,2,2,2,2,2,2,1};
    vector<int> vec2 = {1,2,3,4,3,3,2,2,6,9,44,43,41,1};
    cout<<unionOf2Arrays(vec1,vec2)<<endl;
    return 0;
}