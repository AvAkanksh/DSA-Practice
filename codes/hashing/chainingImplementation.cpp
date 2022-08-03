#include <iostream>
#include <vector>
#include <list>

using namespace std;

// struct MyHash{
//     int BUCKET;-
//     list<int> *table;
//     MyHash(int b){
//         BUCKET = b;
//         table = new list<int>[b];
//     }

//     void insert(int key){
//         int i = key%BUCKET;
//         table[i].push_back(key);
//     }

//     void search(){
//         cout<<"HI"<<endl;
//     }

//     void remove(int key){
//         int i = key%BUCKET;
//         table[i].remove(key);
//     }

// };

int main()
{
    int x= 10;
    cout<<x<<endl;
    cout<<&x<<endl;
    int &y = x ;
    cout<<*(&y)<<endl;
    int a = 10;
    cout<<a<<endl;
    cout<<float(a)<<endl;
    float b = 10.1;
    cout<<b<<endl;
    cout<<int(b)<<endl;

    return 0;
}