#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

struct point{
    int x,y;
};

bool mycomp(point p, point q){
    return(p.y<q.y);
}

int main()
{
    point P[] = {{1,2},{3,4},{2,1}};
    sort(P,P+3,mycomp);
    for(int i = 0 ;i < 3;i++){
        cout<<P[i].x<<" "<<P[i].y<<endl;
    }
    return 0;
}