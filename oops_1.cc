// Main function of the C++ program.

#include <iostream>
#include <cmath>
using namespace std;
struct V3{
    double x,y,z;
};
V3 sum (V3 const &a, V3 const &b)  {
    V3 v;
    v.x = a.x + b.x;
    v.y = a.y + b.y;
    v.z = a.z + b.z;
    return v;
}
V3 scale (V3 const &a, double const factor) {
    V3 v;
    v.x = a.x * factor;
    v.y = a.y * factor;
    v.z = a.z * factor;
    return v;
}
double length (V3 const &a) {
    double temp;
    temp = a.x * a.x + a.y *a.y + a.z * a.z;
    return sqrt(temp);
}
int main () {
    V3 p,*ptrP;
    cin >> p.x;
    ptrP = &p;
    cout << "test var" << ptrP -> x << endl;
    
    V3 u,a,s;
    double t;
    cout<<"enter values for xyz ="<<endl;
    cin >> u.x >> u.y >> u.z >> a.x >> a.y >> a.z;
    cout<< "add scaling factor "<<endl;
    cin>>t;
    
    s =  sum(u,a);
    cout<<"sum is here =" <<endl;
    cout << s.x << " "<<s.y<< " " << s.z << endl;

    s =sum(scale(u,t), scale(a,t*t/2));
    cout << "sum with scale is here :"<<endl;
    cout << s.x<< " " <<s.y<< " " <<s.z<<endl;
    return 0;
}

/*
Sample Run for the given code : 
12.23
12.23

Uncomment the rest of the code or add your own code and see the results
*/