#include<iostream>
#include<algorithm>
using namespace std;

// Remove the duplicates in a sorted array

int removeDuplicates(int myarray[] , int arr_size){
    int res = 1;
    for(int i = 1; i < arr_size; i++ ){
        if(myarray[i]!=myarray[res-1]){
            myarray[res] = myarray[i];
            res++;
        }
    }
    return res;
}

int main(){

int arr[] = {10,20,20,20,20,20,20,20,1,30,40};
cout<<"The new length of the arr without duplicates is : "<<removeDuplicates(arr,11)<<endl;

return 0 ;
}