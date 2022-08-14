#include <iostream>
#include <vector>
#include <unordered_set>


using namespace std;

int main()
{
    unordered_set<int> s;
    s.insert(1);
    s.insert(5);
    s.insert(10);
    s.insert(3);
    for(int x : s){
        cout<<x<<endl;
    }
    cout<<"--------"<<endl;
    for(auto it = s.begin(); it!=s.end(); it++){
        cout<<*it<<endl;
    }
    cout<<"size of the unordered set is : "<<s.size()<<endl;
    // s.clear();
    // cout<<"performed s.clear()"<<endl;
    // cout<<"size of the unordered set after cleaning is : "<<s.size()<<endl;
    int find_element = 1;
    if(s.find(find_element)== s.end()){
        cout<<"Element Not Found"<<endl;
    }else{
        cout<<"Element Found : "<< *s.find(find_element)<<endl;
        cout<<"Erasing element "<<find_element<<endl;
        s.erase(find_element);
    }

    cout<<"size of the unordered set is : "<<s.size()<<endl;
    int erase_element = 5;
    auto it = s.find(erase_element);
    s.erase(it);
    cout<<"Erasing element : "<<erase_element<<endl;
    cout<<"size of the unordered set is : "<<s.size()<<endl;
    cout<<"Erasing all the elements"<<endl;
    s.erase(s.begin(),s.end());
    cout<<"size of the unordered set is : "<<s.size()<<endl;

    return 0;
}