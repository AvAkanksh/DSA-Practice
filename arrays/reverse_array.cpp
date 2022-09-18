#include<iostream>
#include<vector>

using namespace std;

void display(vector<int> vec){
    for(int i = 0 ; i < vec.size();i++){
        cout<<vec[i]<<"\t";
    }
    cout<<""<<endl;
}

void reverse(vector<int> &vec){
    int l = 0;
    int h = vec.size()-1;
    while(l<h){
        int temp = vec[l];
        vec[l] = vec[h];
        vec[h] = temp;
        l++;
        h--;
    }
}

int main(){
    vector<int> vec = {1,2,3,4};
    vector<int> vec2 = {1,2,3,4,5};
    cout<<"Vectors Before Reversing"<<endl;
    display(vec);
    display(vec2);

    cout<<"Vectors After Reversing"<<endl;
    reverse(vec);
    reverse(vec2);
    display(vec);
    display(vec2);

    return 0;
}