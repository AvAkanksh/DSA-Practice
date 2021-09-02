#include<iostream>
using namespace std;

// Structure
typedef struct employee{
    int eID;
    char favCharge;
    float salary;
}emp;


// Union
union money{
    int a;
    int b;
    char c;
    float d;
};

int main(){
    // emp akki;
    // akki.eID =1;
    // akki.favCharge ='a';
    // akki.salary =100;
    // cout << akki.eID<<endl;
    // cout << akki.favCharge<<endl;
    // cout << akki.salary<<endl;
    // union money akki;
    // akki.c = 'a';
    // cout << akki.d<<endl;
    enum Meal{breakfast, lunch , dinner };
    Meal m1  = dinner;
    cout<<m1<<endl;
    return 0 ;
}