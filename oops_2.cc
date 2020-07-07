// Main function of the C++ program.

#include <iostream>
#include <cmath>
using namespace std;
struct V3 {
    double x, y, z;
    double length(){ 
        return sqrt(x*x + y*y + z*z);
    }

    V3 sum (V3 const &b) {
        V3 v;  
        v.x = x + b.x;
        cout << "x= "<<x; cout <<"  b.x="<<b.x <<endl;
        v.y = y + b.y; 
        v.z = z + b.z ; 
        return v;
    }
    V3 scale (double const factor) {
        V3 v; 
        v.x = x*factor;
        v.y = y*factor;
        v.z = z*factor;
        return v;
    }
};
int main () 
{
    V3 p,q,r, *ptrQ;
    cin >> p.x >> p.y >>  p.z;
    cout <<"input vector: "<< p.x<<" "<<p.y<<" "<<p.z<<endl;
    q = p.scale(2);
    // q=p;
    ptrQ = &q;
    r.x=2;r.y=8;r.z=3;
    cout << "length : "<<ptrQ->length()<<endl;
    cout << "vector to be sum with "<<r.x<<" "<<r.y<<" "<<r.z<<endl;
    r= r.sum(p);
    cout << "after sum:" <<r.x<<" "<<r.y<<" "<<r.z<<endl;
    return 0;
}

/*
Sample Test Case:
Input : 6 8 24 
Output : 13
*/