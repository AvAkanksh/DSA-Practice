#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> vec){
    cout<<""<<endl;
    for(int i = 0 ; i < vec.size(); i++){
        cout<<vec[i]<<"\t";
    }
    cout<<""<<endl;
}
void minimumFlips(vector<int> vec){
    for(int i = 1 ; i < vec.size(); i++){
        if(vec[i]!=vec[i-1]){
            if(vec[i]!=vec[0]){
                cout<<"From "<<i<<" to ";
            }
            else{
                cout<<(i-1)<<endl;
            }
        }
    }
    if(vec[vec.size()-1]!=vec[0]){
        cout<<(vec.size()-1)<<endl;
    }
}

int main()
{
    vector<int> vec = {0,0,0,1,1,1,0,1,0,0,1};
    vector<int> vec2 = {1,0,0,0,1,1,0,0,0,1,0,1,0,0,1};
    display(vec);
    minimumFlips(vec);
    cout<<""<<endl;
    display(vec2);
    minimumFlips(vec2);

    return 0;
}