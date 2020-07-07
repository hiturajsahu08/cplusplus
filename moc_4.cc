// more on constructors 
#include<iostream>
#include<cmath>
#include<string>
using namespace std;


class V3 {
    private:
        double x, y, z;
        double length(){ 
            return sqrt(x*x + y*y + z*z);
        }
        
    public:
        V3(double vx = 0.0, double vy = 1.0, double vz = 2.0) {
            x = vx;
            y = vy;
            z = vz;
            return;
        }
       
        ~V3() {
            if (length() == 0.0) {
                cout << "Zero vector !!!";
                return;
            }
        }
        V3 sum(V3 const &b) { return V3(x + b.x, y + b.y, z + b.z); }
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

int main() {
    V3 a;
    V3 b(1.2);
    V3 c(1.2, 1.3);
    V3 d(1.2, 1.3, 1.4);
    a.printLength();
    b.printLength();
    c.printLength();
    d.printLength();
    return 0;
}

/*Output:
x: 0 y: 1 z: 2
x: 1.2 y: 1 z: 2
x: 1.2 y: 1.3 z: 2
x: 1.2 y: 1.3 z: 1.4
*/