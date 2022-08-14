#include <iostream>
#include <vector>
#include <unordered_set>


using namespace std;

void checkPair(vector<int> vec , int sum){
    unordered_set <int> s;
    for(auto x : vec){
        if(s.find(sum-x) != s.end() ){
            cout<<"The pair exits!"<<endl;
            return;
        }
        s.insert(x);
    }
    cout<<"The pair doesn't exits!"<<endl;
}

int main()
{
    vector<int> vec = {1,2,34,2,35,3,2,2,24236,234,1,2323,2,-199,123};
    int sum = -191;
    checkPair(vec,sum);

    return 0;
}