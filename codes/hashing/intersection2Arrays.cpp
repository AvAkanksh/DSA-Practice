#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int distinctIntersection(vector<int> vec1 , vector<int> vec2){
    int res = 0;
    unordered_set<int> s;
    for(auto x : vec1){
        s.insert(x);
    }
    for(auto x : vec2){
        if(s.find(x)!=s.end()){
            s.erase(x);
            res++;
        }
    }

    return res;
}

int main()
{
    vector<int> vec1 = {1,2,3,4,5,6,7,5,4,3,3,2,2,2,2,2,2,2,1};
    vector<int> vec2 = {1,2,3,4,3,3,2,2,6,9,44,43,41,1};
    cout<<distinctIntersection(vec1,vec2)<<endl;
    return 0;
}