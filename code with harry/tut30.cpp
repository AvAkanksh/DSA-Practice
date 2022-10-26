#include<bits/stdc++.h>

using namespace std;

class Point{
    int x, y;
    public:
        Point(int x1 , int y1){
            x = x1;
            y = y1;
        }

        void displayPoint(){
            cout<<"The x and y coordinates are : ("<<x<<","<<y<<")"<<endl; 
        }

        friend void distance(Point , Point);

};

void distance(Point p , Point q){
    float dist = sqrt(pow((p.x - q.x),2) + pow((p.y - q.y),2));
    cout<<"The distance between Point p and Point q is : "<<dist<<endl;
}

int main(){

    Point p = Point(2,3);
    p.displayPoint();
    
    Point q = Point(4,9);
    q.displayPoint();

    distance(p,q);

    return 0;
}