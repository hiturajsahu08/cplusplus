//more on constructors

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
        V3 sum (V3 const &b) {
            V3 v;  
            v.x = x + b.x;
            v.y = y + b.y; 
            v.z = z = b.z ; 
            return v;
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

int main() {
    V3 a(1.0, 2.0, 3.0);
    V3 b = a.scale(4.0);
    b.printLength();
    return 0;
}

/*Output:
x: 4 y: 8 z: 12
*/
