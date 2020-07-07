#include <iostream>
#include <cmath>

using namespace std;

class V3
{
private:
    /*defining private variables*/
    double x; double y; double z; 
public:
    /*public member fucntions and variables*/
    /*constructor function with arguments*/
    V3(double vx, double vy, double vz)
    {
        x=vx; y=vy; z=vz;
        return;
    }
    /*constructor function w/o arguments*/
    V3() {x=y=z=0.0; return;}
// #ifdef DECONSTRUCT
//     /*destructor function*/
//     ~V3() { if (length()==0.0)
//             {cout << "zero vector!!!"<<endl;}
//             return;
//         }
// #endif
    /* public member functions */
    V3 sum(V3 b)
    {
        V3 v;
        v.x = x + b.x;
        v.y = y + b.y;
        v.z = z + b.z;
        return v;
    }
    V3 scale(double t)
    {
        V3 v;
        v.x = t*x;
        v.y = t*y;
        v.z = t*z;
        return v;
    }
    void print()
    {
        cout << " x: "<< x<< " y: "<< y<< " z: "<<z  <<endl;
        return;
    }
    float length()
    {
        return sqrt(x*x + y*y + z*z);
    }
};
int main()
{
    V3 a={4.0,3.1,2.4};
    V3 g(5.0,6.0,7.0); 
    V3 *ptr_2 = new V3(1.0,2.0,3.0);
    V3 *ptr_3;
    V3 *ptr_4;
    ptr_3 = new V3(11.0,22.0,33.0);
    V3 b,d,e,f, *ptr;
    V3 h = g.sum(V3(1.0,2.0,3.0));
    a.print();
    b.print();
    ptr_4 = new V3;
    V3 c=b.sum(a);
    c.print();
    // ptr->print();  
    ptr = &e;
    e={1.2,5.2,4.3};
    ptr -> print();
    ptr -> scale(0.5);
    e.print(); 
    ptr -> print(); 
    f.print();
    ptr_2 -> print();
    g.print();
    ptr_3 -> print(); 
    ptr_4 -> print();
    h.print(); 
    return 0;
}