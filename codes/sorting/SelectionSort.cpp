#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> vec){
    for(int i = 0 ; i < vec.size(); i++){
        cout<<vec[i]<<"\t";
    }
    cout<<""<<endl;
}

void selectionSort(vector<int> vec){
    for(int i = 0 ; i < vec.size();i++){
        int value = vec[i];
        for(int j = i+1; j < vec.size();j++){
            if(value>vec[j]){
                int temp = value;
                vec[i] = vec[j];
                vec[j] = temp;
            }
        }
    }
    display(vec);
}

int main()
{
    vector<int> vec = {3,2,1,5,8,6,9,7,10,22,3};
    selectionSort(vec);

    return 0;
}