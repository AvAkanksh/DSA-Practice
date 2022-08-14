#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

void display(vector<int> vec){
    for(int i = 0 ; i < int(vec.size()); i++){
        cout<<vec[i]<<"\t";
    }
    cout<<""<<endl;
}

int findDistinct(vector<int> vec){
    unordered_set<int> s;
    for (int i = 0 ; i< vec.size(); i++){
        s.insert(vec[i]);
    }
    return s.size();
}

int main()
{
    vector<int> vec = {1,2,3,5,5,2,1,1,1,1};
    display(vec);
    cout<<"Total number of distinct element is the vector present is : " << findDistinct(vec)<<endl;

    return 0;
}