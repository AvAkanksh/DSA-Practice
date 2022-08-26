#include <iostream>
#include <vector>
#include <map>


using namespace std;

int main()
{
    map<int,int> m;
    m.insert({1,5});
    // m.insert({2,6});
    // m.insert({3,7});
    // m.insert({4,8});

    // for(auto it = m.begin(); it !=m.end() ; it++){
    //     cout<<(*it).first<<" " <<(*it).second<<endl;
    //     cout<<it->first<<" " <<it->second<<endl;

    // }
    auto it = m.begin();
    cout<<(*it).first<<endl;
    return 0;
}