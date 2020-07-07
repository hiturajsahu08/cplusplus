/**this file is written to explain about
* constructor function with default values**/

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
    /** this is special constructor function, 
     * in which, if we pass value of alone, then
     * valueof y and z will be initialized to 1.0 and 2.0
     * otherwise it will take the passed value**/
    V3(double vx=0.0, double vy=1.0, double vz=2.0)
    {
        x=vx; y=vy; z=vz;
        return;
    }
    
    /*constructor function w/o arguments*/
    // V3() {x=y=z=0.0; return;}
    /*this is not defined here because of previous constructor function type*/

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
    V3 g(5.0,6.0);  /*only two argument is passed, third will be 
    * taken from default value which is 2.0*/
    V3 i(4.0);/*only two argument is passed, 2nd/3rd will be 
    * taken from default value which is 1.0 & 2.0*/
    V3 j(5.0,6.0);
    V3 k = j; 
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
    cout<<"look at g"<< endl; 
    g.print();
    cout<<"look at i"<< endl; 
    i.print();
    cout<<"print value of j: ";
    j.print();
    cout << "address of j: " << &j <<endl;
    cout<<"print value of k: ";
    i.print();
    cout << "address of k: "<< &k <<endl;
    
    return 0;
}