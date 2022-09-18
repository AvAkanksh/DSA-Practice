#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> vec){
    for(int i = 0 ; i < vec.size(); i++){
        cout<<vec[i]<<"\t";
    }
    cout<<""<<endl;
}

void merge(vector<int> vec1, vector<int> vec2){
    int i = 0 ;
    int j = 0 ;
    while(i<vec1.size() && j < vec2.size()){
        if(vec1[i]>vec2[j]){
            cout<<vec2[j]<<"\t";
            j++;
        }
        else{
            cout<<vec1[i]<<"\t";
            i++;
        }
    }
    while(i < vec1.size()){
        cout<<vec1[i]<<"\t";
        i++;
    }
    while(j < vec2.size()){
        cout<<vec2[j]<<"\t";
        j++;
    }
    cout<<"\n"<<endl;
}

int main()
{
    vector<int> vec1 = {2,5,6,8,8,9,10,12,16,17,23};
    vector<int> vec2 = {4,5,16,19,23,33,54};
    display(vec1);
    display(vec2);
    merge(vec1,vec2);

    return 0;
}