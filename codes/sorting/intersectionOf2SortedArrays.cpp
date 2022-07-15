#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> vec){
    for(int i = 0 ; i < vec.size(); i++){
        cout<<vec[i]<<"\t";
    }
    cout<<""<<endl;
}

void intersection(vector<int> vec1, vector<int> vec2){
    int i = 0 ;
    int j = 0 ;
    while(i < vec1.size() && j< vec2.size()){
        if(i>0 &&vec1[i]==vec1[i-1]){i++;continue;}
        if(vec1[i]<vec2[j]){
            i++;
        }
        else if(vec1[i]>vec2[j]){
            j++;
        }
        else{
            cout<<vec1[i]<<endl;
            i++;
            j++;
        }
    }
}

int main()
{
    vector<int> vec1 = {1,1,2,3,3,4,5,6,7,7,7,7,7,8,9,10};
    vector<int> vec2 = {2,3,3,4,5,5,5,10};
    display(vec1);
    display(vec2);
    intersection(vec1,vec2);
    return 0;
}