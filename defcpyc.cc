//section 25 : Default and Copy Constructors

#include <iostream>
#include <cmath>
using namespace std;
class V3 {
    private:
        double x, y, z;
        double length(){ 
            return sqrt(x*x + y*y + z*z);
        }

    public:
        V3(double vx, double vy, double vz) {
            x = vx;
            y = vy;
            z = vz;
            return;
        }
    V3() {
        x = y = z = 0.0;
        return;
    }
    ~V3() {
            if (length() == 0.0) {
                cout << "Zero vector !!!";
                return;
            }
    }
    V3(const V3 &src) {
        x = src.x;
        y = src.y;
        z = src.z;
    }
    V3 scale (double const factor) {
        V3 v; 
        v.x = x*factor;
        v.y = y*factor;
        v.z = z*factor;
        return v;
    }
    void printLength() {
        cout << "x: " << x << " y: " << y << " z: " << z << endl;
        return;
    }
};
    V3 myFunc(V3 a) {
        V3 v;
        v = a.scale(2.0);
        return v;

    };   
int main() {
    
    V3 a(0.0, 1.0, 2.0);
    V3 a1 = a, a2;
    a2 = myFunc(a);
    a2.printLength();
    return 0;
}

/* Output:
x: 0 y: 2 z: 4
*/