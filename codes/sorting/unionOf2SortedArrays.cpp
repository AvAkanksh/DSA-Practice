#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> vec){
    for(int i = 0 ; i < vec.size(); i++){
        cout<<vec[i]<<"\t";
    }
    cout<<""<<endl;
}

void findUnion(vector<int> vec1, vector<int> vec2){
    int i = 0 ;
    int j = 0;
    while((i < vec1.size()) && (j < vec2.size())){

        if(i>0 && vec1[i]==vec1[i-1]){i++;continue;}
        if(j>0 && vec2[j]==vec2[j-1]){j++;continue;}
        if(vec1[i]<vec2[j]){
            cout<<vec1[i]<<"\t";
            i++;
        }
        else if(vec1[i]>vec2[j]){
            cout<<vec2[j]<<"\t";
            j++;
        }
        else{
            cout<<vec1[i]<<"\t";
            i++;
            j++;
        }
    }
    while(i < vec1.size()){
        if(i>0 && vec1[i]==vec1[i-1]){i++;continue;}
        cout<<vec1[i]<<"\t";
        i++;
    }
    while(j < vec2.size()){
        if(j>0 && vec2[j]==vec2[j-1]){j++;continue;}
        cout<<vec2[j]<<"\t";
        j++;
    }
    cout<<"\n";
}

int main()
{
    vector<int> vec1 = {1,2,3,3,5,6,7,8,9,10};
    vector<int> vec2 = {1,1,1,1,2,3,3,3,5,6,6,7,8,9,10,11,12,12,12,16};
    display(vec1);
    display(vec2);
    findUnion(vec1,vec2);

    return 0;
}