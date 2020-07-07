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
    ~V3() {
        cout<<"we are here"<<endl;
        if (length() == 0.0) {
            cout << "Zero vector !!! " << endl;
        }
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
    V3 a(1.0, 2.0, 3.0);
    V3 b;
    V3 *q;
    a = b;
    V3 *p = new V3(1.0, 1.0, 1.0);
    a = *p;
    p->print();
    delete p;
    return 0;
}

/*Output:
Zero vector !!! 
*/
