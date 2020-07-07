// Main function of the C++ program.
// section 23 of OOPS iitbx
// Constructor And Destructor Functions

#include <iostream>
#include<cmath>
using namespace std;

class V3 {
    private:
    double x, y, z;
    public:
    V3 (double vx, double vy, double vz) {
        x = vx; y = vy; z = vz;  return;
    }
    V3 () {
        x = y = z = 0.0;
        return;
    }
  
    double length(){ 
        return sqrt(x*x + y*y + z*z);
    }
    
    V3 sum (V3 b) {
        V3 v;  
        v.x = x + b.x;
        v.y = y + b.y; 
        v.z = z = b.z ; 
        return v;
    }
    V3 scale (double t) {
        V3 v; 
        v.x = x*t;
        v.y = y*t;
        v.z = z*t;
        return v;
    }
    void print() {
        cout << "x: " << x << " y: " << y << " z: " << z << endl;
        return;
    }
};



int main() {
    V3 a(0.0, 0.0, 0.0);
    V3 b;
    V3 *p,*q;
    a = b;
    
    p = new V3(1.0, 2.0, 3.0);
    q = new V3;
    
    cout << "This is from the object pointed by p:\t";
    p->print();
    
    a = *p;
   
    b = *q;
    
    cout << "\nThis is from the object a:\t";
    a.print();
   
    delete p;
     
    delete q;
     
    return 0;
}

/* Output:
This is from the object pointed by p:	x: 1 y: 2 z: 3

This is from the object a:	x: 1 y: 2 z: 3
*/
