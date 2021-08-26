#include<iostream>

using namespace std;

int main(){
    // cout<<"This is tut9"<<endl;
    // int age;
    // cout<<"Tell me your age"<<endl;
    // cin>>age;
    // if (age<18){
    // cout<<"Your age is less than 18"<<endl;
    // }
    // else if(age==18){
    //     cout<<"Your age is equal to 18"<<endl;
    // }
    // else{
    //     cout<<"Your age is greater than 18"<<endl;
    // }
    int age;
    std::cout << "Enter your age
    " << std::endl;
    cin>>age;
    switch (age)
    {
    case 1:
        std::cout << "Your age is 1" << std::endl;
        break;
    case 2:
        std::cout << "Your age is 2" << std::endl;
        break;
    case 3:
        std::cout << "Your age is 3" << std::endl;
        break;
    case 4:
        std::cout << "Your age is 4" << std::endl;
        break;

    default:
    std::cout << "Your are above 4 years or less that 1 year" << std::endl;
        break;
    }
    return 0;
}