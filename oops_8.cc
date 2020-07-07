/**this file is written to explain about
* constructor function with default values**/

/*NOT COMPILABLE 23:20 28June*/

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
     * in which, it will use the initialization list
     * which will be added after colun : */
    V3(double vx, double vy, double vz) : x=vx*2,y=vy*2,z=xy*0.5
    {
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
    V3 g(5.0,6.0,7.0);
    a.print();
    g.print();
    return 0;
}