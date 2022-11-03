#include<bits/stdc++.h>

using namespace std;

class Num{
    static int count;

    public:
        Num(){
            count++;
            cout<<"Creating object num"<<count<<endl;
        }
        ~Num(){
            cout<<"Deleting object num"<<count<<endl;
            count--;
        }
};

int Num::count;

int main(){
    cout<<"Entered the main block"<<endl;
    Num n1;
    {
        cout<<"Entering a block"<<endl;
        Num n2,n3;
        cout<<"Exiting a block"<<endl;
    }  
    cout<<"Exiting the main block"<<endl;
    char a = ' ';
    cout<<int('0')<<endl;
    return 0;
}