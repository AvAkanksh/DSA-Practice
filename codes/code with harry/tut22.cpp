#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;
    string s_original;

public:
    string t = "hello";
    int a = 10;
    void read(void);
    void chk_bin(void);
    void ones_complement(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
    s_original = s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '0' && s[i] != '1')
        {
            cout << s << " is not a binary number!" << endl;
            exit(0);
        }
    }
    cout << s << " is a binary number!" << endl;
}

void binary :: ones_complement(void){
    chk_bin();
    for(int i = 0 ; i <s.length(); i++){
        if(s[i]=='1'){
            s[i]='0';
        }
        else{
            s[i]='1';
        }
    }
    cout<<"The ones complement of the given binary number "<<s_original<<" is :"<<s<<endl;
}


int main()
{
    //  OOPs - Classes and objects
    // C++ --> initially clled  --> C with classes by stroustroup
    // structures had limitations
    //      - members are public
    //      - No methods
    //  classes --> structures + even more
    //  classes --> can have methods and properties
    //  classes --> can make few members as private and some as public
    //  structures  in C++ are typedef
    //  you can declare objects along with class declarations like this:
    // class Employee{
    // class Definition
    // } akki, akanksh, tom;

    //  akanksh.salary = 2000 can not be performed if it is declared private variable.
    binary b;
    b.read();
    // b.chk_bin();
    b.ones_complement();
    // cout<<b.s<<endl; //This line will give an error because s is a private variable.
    cout<<b.t <<endl;
    return 0;
}