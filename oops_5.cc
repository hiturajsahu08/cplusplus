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
struct MotionSimulator {
    V3 initPos, initVel, acc;
    V3 currPos,currVel;
    double deltaT;
    void initializeSimulator() {
        currPos = initPos;
        currVel = initVel; 
        return;
    } 
    void printPosition() {
        currPos.print();
        return;
    }
    void simulateAStep() {
        currPos = currPos.sum(currVel.scale(deltaT));
        currVel = currVel.sum(acc.scale(deltaT));
        return;
    }    
};  
int main()  {
    MotionSimulator mSim;
    double t = 0.0, deltaT,totalT;  //  t: time elapsed so far
    cout << "Give x, y and z components of initial velocity: ";
    cin >> (mSim.initVel).x  >> (mSim.initVel).y >>  (mSim.initVel).z;
    cout << "Give x, y and z components of acceleration: ";
    cin >> (mSim.acc).x >>  (mSim.acc).y >>  (mSim.acc).z;
    cout << "Give x, y and z components of initial position: ";
    cin >> (mSim.initPos).x >> (mSim.initPos).y >> (mSim.initPos).z;
    cout << "Give total simulation time: ";
    cin >> totalT;
    cout << "Given simulation time granularity: ";
    cin >> deltaT;
    mSim.deltaT = deltaT;
    mSim.initializeSimulator();
    while (t <= totalT) {
        mSim.simulateAStep();
        cout << "Time " << t << " " ;
        mSim.printPosition(); 
        t = t + deltaT;
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
Time 0 x: 0.1 y: 0.2 z: 0.3 
Time 0.1 x: 0.201 y: 0.402 z: 0.003 
Time 0.2 x: 0.303 y: 0.606 z: 0.003 
Time 0.3 x: 0.406 y: 0.812 z: 0.003 
Time 0.4 x: 0.51 y: 1.02 z: 0.003 
Time 0.5 x: 0.615 y: 1.23 z: 0.003 
Time 0.6 x: 0.721 y: 1.442 z: 0.003 
Time 0.7 x: 0.828 y: 1.656 z: 0.003 
Time 0.8 x: 0.936 y: 1.872 z: 0.003 
Time 0.9 x: 1.045 y: 2.09 z: 0.003 
Time 1 x: 1.155 y: 2.31 z: 0.003
*/