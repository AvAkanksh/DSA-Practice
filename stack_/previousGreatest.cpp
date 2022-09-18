#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

void previousGreater(vector<int> vec){
    stack<int> greaterElement;
    cout<<-1<<'\t';
    greaterElement.push(vec[0]);
    for(int i = 1; i < int(vec.size()); i++){
        while(!(greaterElement.empty())&& vec[i]>=greaterElement.top() ){
            greaterElement.pop();
        }
        int pg = (greaterElement.empty()) ? -1 : greaterElement.top();
        cout<<pg<<"\t";
        greaterElement.push(vec[i]);
    }
    cout<<'\n';


}

void printVec(vector<int> vec){
    for(int i = 0 ; i< int(vec.size());i++){
        cout<<vec[i]<<'\t';
    }
    cout<<'\n';
}

int main()
{
    vector<int> vec;
    // vec = {1,2,3,4,5,6};
    vec = {8,3,9,5,1};
    printVec(vec);
    reverse(vec.begin(),vec.end());
    printVec(vec);
    previousGreater(vec);
    return 0;
}