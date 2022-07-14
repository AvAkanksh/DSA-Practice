#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void display(vector<int> vec){
    for(int i = 0 ; i < vec.size(); i++){
        cout<<vec[i]<<"\t";
    }
    cout<<""<<endl;
}

int main()
{
    vector<int> vec = {2,1,4,3,6,6,9,2};
    sort(vec.begin(),vec.end(),greater<int>() );
    display(vec);
    return 0;
}