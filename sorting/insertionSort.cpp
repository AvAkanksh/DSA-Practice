#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> vec){
    for(int i = 0 ; i < vec.size(); i++){
        cout<<vec[i]<<"\t";
    }
    cout<<""<<endl;
}

void insertionSort(vector<int> vec){
    for(int i = 1 ; i < vec.size(); i++){
        int j = i-1;
        int value = vec[i];
        while(j>=0 && value<vec[j]){
            vec[j+1] = vec[j];
            j--;
        }
        vec[j+1]= value;
    }
    display(vec);
}

int main()
{
    vector<int> vec = {10,4,2,9,6,3,7,4,1,9,2,4,3,7};

    insertionSort(vec);

    return 0;
}