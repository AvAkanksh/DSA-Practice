#include <iostream>
using namespace std;

class Employee
{

    int id;
    static int count;

public:
    void setData()
    {
        cout << "Enter the id for  employee" << endl;
        cin >> id;
        count++;
    }
    void getData(){
        cout<<"The id of the employee is "<<id<<endl;
        cout<<"this employee number is "<<count<<endl;
    }

    static void getCount(){
        cout<<"The count value is :"<<count<<endl;
        cout<<"The count valiable address is :"<<&count<<endl;
    }
};

int Employee:: count= 1200;

int main()
{
    Employee akanksh,akanksh2,akanksh3;
    akanksh.setData();
    akanksh.getData();
    Employee::getCount();

    akanksh2.setData();
    akanksh2.getData();
    Employee::getCount();

    akanksh3.setData();
    akanksh3.getData();
    Employee::getCount();

    return 0;
}