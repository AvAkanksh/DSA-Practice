#include <iostream>
#include <vector>

using namespace std;

void swap(vector<int> &vec, int i , int j){
    int temp = vec[i];
    vec[i] = vec[j];
    vec[j] = temp;
}

void display(vector<int> vec){
    for(int i = 0 ; i < vec.size(); i++){
        cout<<vec[i]<<"\t";
    }
    cout<<""<<endl;
}

int main()
{
    vector<int> vec = {1,2,3};
    int i = 2,j = 0;
    display(vec);
    swap(vec, i , j);
    display(vec);
    return 0;
}