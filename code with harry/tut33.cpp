#include<bits/stdc++.h>

using namespace std;

class BankDeposite{
    int principle;
    int years;
    float interestRate;
    float returnValue;
    public:
        BankDeposite(){}
        BankDeposite(int p , int y , float r){
            principle = p;
            years = y;
            interestRate = r;
            returnValue = principle;
            for(int i = 0 ; i< y ; i++){
                returnValue = returnValue*(1+interestRate);
            }
        }
        
        BankDeposite(int p , int y , int R){
            principle = p;
            years = y;
            interestRate = float(R)/100;
            returnValue = principle;
            for(int i = 0 ; i< y ; i++){
                returnValue = returnValue*(1+interestRate);
            }
        }
        void show(){
            cout<<"The return value after "<< years<<" year is "<< returnValue<<endl;
        }


};

int main(){

    BankDeposite b1,b2;
    int p;
    int y ;
    float r;
    int R;

    cout<<"Enter the values of p , y and r :"<<endl;
    cin>>p>>y>>r;
    b1 = BankDeposite(p,y,r);
    b1.show();

    cout<<"Enter the values of p , y and r :"<<endl;
    cin>>p>>y>>R;
    b2 = BankDeposite(p,y,R);
    b2.show();

    return 0;
}