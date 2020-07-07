// Main function of the C++ program.

#include <iostream>
#include <cmath>
using namespace std;
struct V3 {
    double x, y, z;
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
int main(){
    V3 vel,acc,pos;// initial velocity, acceleration, initial position
    V3 currDispl,currPos; // current displacement & position
    double t = 0.0, deltaT, totalT;  //  t: time elapsed so far
    cout << "Give x, y and z components of initial velocity: ";
    cin >> vel.x >> vel.y >> vel.z;
    cout << "Give x, y and z components of acceleration: ";
    cin >> acc.x >> acc.y >> acc.z;
    cout << "Give x, y and z components of initial position: ";
    cin >> pos.x >> pos.y >> pos.z;
    cout << "Give total simulation time: ";
    cin >> totalT ;
    cout << "Given simulation time granularity: ";
    cin  >> deltaT;
    if ((totalT < 0)  || (deltaT <= 0)) {
        cout << "Invalid input!" << endl;
        return -1;
    }
    while (t <= totalT) {
        // Calculate current displacement using vel*t + (0.5)*acc*t2
        currDispl = (vel.scale (t)).sum(acc.scale(0.5*t*t));
        currPos  = currDispl.sum(pos);
        cout << "Time " << t << " " ;
        currPos.print();  t = t + deltaT;
    }     
    return 0;
}


/*
Sample test case : 
Give x, y and z components of initial velocity: 1 2 3 
Give x, y and z components of acceleration: 0.1 0.2 0.3 
Give x, y and z components of initial position: 0 0 0 
Give total simulation time: 1 
Given simulation time granularity: 0.1 
Time 0 x: 0 y: 0 z: 0 
Time 0.1 x: 0.1005 y: 0.201 z: 0 
Time 0.2 x: 0.202 y: 0.404 z: 0 
Time 0.3 x: 0.3045 y: 0.609 z: 0 
Time 0.4 x: 0.408 y: 0.816 z: 0 
Time 0.5 x: 0.5125 y: 1.025 z: 0 
Time 0.6 x: 0.618 y: 1.236 z: 0 
Time 0.7 x: 0.7245 y: 1.449 z: 0 
Time 0.8 x: 0.832 y: 1.664 z: 0 
Time 0.9 x: 0.9405 y: 1.881 z: 0 
Time 1 x: 1.05 y: 2.1 z: 0
*/
