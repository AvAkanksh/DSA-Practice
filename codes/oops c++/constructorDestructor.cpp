#include <iostream>
#include <vector>

using namespace std;

class Point{
    private:
        int x;
        int y;
    public:
        Point(){
            x = 0;
            y = 0;
        }
        Point(int a, int b){
            x = a;
            y = b;
        }
        void print(){
            cout<<x <<" "<<y<<endl;
        }
};

int main()
{
    Point p1 , p2(1,2);
    p1.print();
    p2.print();

    Point *ptr = new Point(3,4);
    ptr->print();

    return 0;
}