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
  V3 a(1.0, 1.0, 1.0);
  V3 b = a.sum(V3(2.0, 2.0, 2.0));
  a.printLength();
  b.printLength();
  return 0;
}

/*Output:
x: 1 y: 1 z: 1
x: 3 y: 3 z: 3
*/