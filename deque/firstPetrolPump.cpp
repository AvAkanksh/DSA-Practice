#include <iostream>
#include <vector>

using namespace std;

int firstCircularTour(vector<int> petrol,vector<int> distance){
    int curr_petrol = 0;
    int previous_petrol = 0;
    int start = 0;
    for(int i = 0 ; i < int(petrol.size()); i++ ){
        curr_petrol += (petrol[i]-distance[i]);
        if(curr_petrol<0){
            start = i+1;
            previous_petrol += curr_petrol;
            curr_petrol = 0;
        }
    }
    return (curr_petrol+previous_petrol>=0) ? start+1: -1;
}

int main()
{
    vector<int> petrol = {4,8,7,4};
    vector<int> distance = {6,5,3,5};

    cout<<firstCircularTour(petrol,distance)<<endl;

    return 0;
}