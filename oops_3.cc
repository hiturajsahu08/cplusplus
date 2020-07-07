#include  <iostream>
#include <cmath>

using namespace std;

struct Rect{
    int x,y;
    int Area() {return x*y;}
    Rect Multi(Rect const &secondRect)
    {
        Rect V;
        V.x = x * secondRect.x;
        V.y = y * secondRect.y;
        return V;
    }
};
int main()
{
    Rect p,q, *ptr;
    int area_of;
    cout<<"enter length and breadth of a rectangle ="<<endl;
    cin>> p.x; cin >> p.y;
    q.x=5; q.y =6;
    area_of = p.Area();
    cout <<"area of p ="<< area_of<<endl;
    p = p.Multi(q);
    cout<< "rectangle dimension after multiplying ="<<p.x<< " "<<p.y<<endl;
    return 0;
}