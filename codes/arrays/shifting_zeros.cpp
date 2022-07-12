#include<iostream>
#include<vector>

using namespace std;

void display(vector<int> vec){
    for(int i = 0 ; i < vec.size();i++){
        cout<<vec[i]<<"\t";
    }
    cout<<""<<endl;
}

void shift_zeros(vector<int> &vec){
    int count = 0 ;
    for(int i = 0 ; i <vec.size(); i++){
        if(vec[i]!=0){
            int temp = vec[i];
            vec[i] = vec[count];
            vec[count] = temp;
            count++;
        }
    }
}

int main(){
    vector<int> vec = {1,2,3,4,5,0,4,3,0,22,0,0,0,1,2,4,0,0,0,2,0,1,0};
    cout<<"Vector before shifting the zeros"<<endl;
    display(vec);
    cout<<"Vector after shifting the zeros"<<endl;
    shift_zeros(vec);
    display(vec);

    return 0;
}