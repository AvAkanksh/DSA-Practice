#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> vec){
    for(int i = 0 ; i < vec.size(); i++){
        cout<<vec[i]<<"\t";
    }
    cout<<""<<endl;
        for(int i = 0 ; i < vec.size(); i++){
        cout<<i<<"\t";
    }
    cout<<""<<endl;
}


int majorityElement(vector<int> vec){
    int res = 0;
    int count = 1;
    for (int i = 1 ; i < vec.size(); i++){
        if(vec[res]==vec[i]){
            count++;
        }
        else{
            count--;
        }
        if(count==0){
            count = 1;
            res = i;
        }
    }

    count = 0;
    for(int i = 0 ; i < vec.size(); i++){
        if(vec[res]==vec[i]){
            count++;
        }
    }
    if(count<=vec.size()/2){
        return -1;
    }
    return res;
}

int main()
{
    vector<int> vec = {3,1,2,3,4,5,3,2,3,3,3};
    display(vec);
    cout<<majorityElement(vec)<<endl;

    return 0;
}