#include <bits/stdc++.h>

using namespace std;

void display(vector<int> vec){
    for(int i = 0 ; i < int(vec.size()); i++){
        cout<<vec[i]<<"\t";
    }
    cout<<""<<endl;
}

void BubbleSort(vector<int> &vec){
    for(int i = 0 ; i < int(vec.size())-1 ; i++){
        for(int j = 0; j < int(vec.size())-i; j++){
            if(vec[j]<vec[j-1]){
                swap(vec[j],vec[j-1]);
            }
        }
    }
}

int main()
{
    vector<int> vec = {1,2,3,2,1,2,3,4,5,6,4,3,2,3,2,3,4,5};
    display(vec);
    BubbleSort(vec);
    display(vec);

    return 0;
}