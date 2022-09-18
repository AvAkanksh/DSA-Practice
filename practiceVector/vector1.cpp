#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// Title of the Program

int main(){

vector<int> g1;

for (int i = 1; i <= 5; i ++){
    g1.push_back(i);
}

cout<<"output of begin and end: "<<endl;
for(auto i = g1.begin(); i != g1.end();++i){
    cout<<*i<<" ";
}
cout<<"\noutput of cbegin and cend: "<<endl;
for(auto i = g1.cbegin(); i != g1.cend();++i){
    cout<<*i<<" ";
}
cout<<"\noutput of rbegin and rend: "<<endl;
for(auto i = g1.rbegin(); i != g1.rend();++i){
    cout<<*i<<" ";
}
cout<<"\noutput of crbegin and crend: "<<endl;
for(auto i = g1.crbegin(); i != g1.crend();++i){
    cout<<*i<<" ";
}
auto a = g1.begin();

// cout<<a<<endl;


return 0 ;
}