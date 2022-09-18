#include <bits/stdc++.h>

using namespace std;

void display(vector<int> vec){
    for(int i = 0 ; i < int(vec.size()); i++){
        cout<<vec[i]<<"\t";
    }
    cout<<""<<endl;
}

void SelectionSort(vector<int> &vec){
    int i , j;
    for(i = 0 ; i < int(vec.size())-1 ; i++){
        int minind = i;
        for(j = i+1; j < int(vec.size()); j++){
            if(vec[minind]>vec[j]){
                minind = j;
            }
        }
        swap(vec[i], vec[minind]);
    }
}

int main()
{
    vector<int> vec = {4,3,2,5,6,7,3,1,2,3,4,5,2,6,8,9};
    display(vec);
    SelectionSort(vec);
    display(vec);

    return 0;
}