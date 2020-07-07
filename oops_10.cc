#include <iostream>
#include <cmath>
using namespace std;
class V3 {
    public:
        double x, y, z;
        
        V3() {
            x = y = z = 5.0;
            return;
        }
        
        V3(double p, double q, double r) {
            x = p;
            y = q;
            z = r;
            return;
        }
        
        void read() {
            cin >> x >> y >> z;
        }
        
        void print() {
            cout << "x: " << x << " y: " << y << " z: " << z << endl;
            return;
        }
        
        V3 operator+ (const V3 &b) const{
            return V3(x + b.x, y + b.y, z + b.z);
        }
        
        V3 operator* (const double factor) const{
            return V3(x*factor, y*factor, z*factor);
        }
  };
  
  V3 operator* (const double factor, const V3 &b) {
      return (b * factor);
  }
        
  int main() {
    V3 vel, acc, pos;
    V3 currDispl, currPos;
    double t = 0.0, deltaT, totalT;  //  t: time elapsed so far
    cout << "Give x, y and z components of initial velocity: ";
    vel.read();
    cout << "Give x, y and z components of acceleration: ";
    acc.read();
    cout << "Give x, y and z components of initial position: ";
    pos.read();
    cout << "Give total simulation time: ";
    cin >> totalT ;
    cout << "Given simulation time granularity: ";
    cin  >> deltaT;
    if ((totalT < 0)  || (deltaT <= 0)) {
        cout << "Invalid input!" << endl;
        return -1;
    }
    
    while (t <= totalT) {
      currDispl = (vel * t) + 0.5 * (acc * (t*t));
      currPos = currDispl + pos;
      t = t + deltaT;
      cout << "Time " << t << " ";
      currPos.print();
    }
    return 0;
}

/* Test case 1:
Give x, y and z components of initial velocity: 2.0
3.2
1.7
Give x, y and z components of acceleration: 0.12
1.1
0.86
Give x, y and z components of initial position: 13.3
9.6
3.5
Give total simulation time: 8.0
Given simulation time granularity: 0.5

Expected Output for Test case 1:
Time 0.5 x: 13.3 y: 9.6 z: 3.5
Time 1 x: 14.315 y: 11.3375 z: 4.4575
Time 1.5 x: 15.36 y: 13.35 z: 5.63
Time 2 x: 16.435 y: 15.6375 z: 7.0175
Time 2.5 x: 17.54 y: 18.2 z: 8.62
Time 3 x: 18.675 y: 21.0375 z: 10.4375
Time 3.5 x: 19.84 y: 24.15 z: 12.47
Time 4 x: 21.035 y: 27.5375 z: 14.7175
Time 4.5 x: 22.26 y: 31.2 z: 17.18
Time 5 x: 23.515 y: 35.1375 z: 19.8575
Time 5.5 x: 24.8 y: 39.35 z: 22.75
Time 6 x: 26.115 y: 43.8375 z: 25.8575
Time 6.5 x: 27.46 y: 48.6 z: 29.18
Time 7 x: 28.835 y: 53.6375 z: 32.7175
Time 7.5 x: 30.24 y: 58.95 z: 36.47
Time 8 x: 31.675 y: 64.5375 z: 40.4375
Time 8.5 x: 33.14 y: 70.4 z: 44.62

Test case 2:
Give x, y and z components of initial velocity: 2.3
2.7
3.9
Give x, y and z components of acceleration: 1.2
1.5
1.6
Give x, y and z components of initial position: 10.4
12.5
11.7
Give total simulation time: 5.0
Given simulation time granularity: 0.25

Expected Output for Test case 2:
Time 0.25 x: 10.4 y: 12.5 z: 11.7
Time 0.5 x: 11.0125 y: 13.2219 z: 12.725
Time 0.75 x: 11.7 y: 14.0375 z: 13.85
Time 1 x: 12.4625 y: 14.9469 z: 15.075
Time 1.25 x: 13.3 y: 15.95 z: 16.4
Time 1.5 x: 14.2125 y: 17.0469 z: 17.825
Time 1.75 x: 15.2 y: 18.2375 z: 19.35
Time 2 x: 16.2625 y: 19.5219 z: 20.975
Time 2.25 x: 17.4 y: 20.9 z: 22.7
Time 2.5 x: 18.6125 y: 22.3719 z: 24.525
Time 2.75 x: 19.9 y: 23.9375 z: 26.45
Time 3 x: 21.2625 y: 25.5969 z: 28.475
Time 3.25 x: 22.7 y: 27.35 z: 30.6
Time 3.5 x: 24.2125 y: 29.1969 z: 32.825
Time 3.75 x: 25.8 y: 31.1375 z: 35.15
Time 4 x: 27.4625 y: 33.1719 z: 37.575
Time 4.25 x: 29.2 y: 35.3 z: 40.1
Time 4.5 x: 31.0125 y: 37.5219 z: 42.725
Time 4.75 x: 32.9 y: 39.8375 z: 45.45
Time 5 x: 34.8625 y: 42.2469 z: 48.275
Time 5.25 x: 36.9 y: 44.75 z: 51.2
*/