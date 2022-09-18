#include <bits/stdc++.h>

using namespace std;

void display(vector<int> vec){
    for(int i = 0 ; i < int(vec.size()); i++){
        cout<<vec[i]<<"\t";
    }
    cout<<""<<endl;
}

void InsertionSort(vector<int> &vec){
    for(int i = 1; i < int(vec.size()); i++){
        int j = i-1;
        int curr = vec[i];
        while(j >= 0 && curr<vec[j]){
            vec[j+1] = vec[j];
            j--;
        }
        vec[j+1] = curr;
    }
}

int main()
{
    vector<int> vec = {1,2,3,2,1,2,3,4,5,6,4,3,2,3,2,3,4,5};
    display(vec);
    InsertionSort(vec);
    display(vec);

    return 0;
}