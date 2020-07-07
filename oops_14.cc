// Main function of the C++ program.
//Section 22 of OOPS with C++ IITBx
//Access Control And Introduction To Classes
#include <iostream>

#include <iostream>
#include <cmath>
using namespace std;
struct V3 {
    double x, y, z;
    double length(){ 
        return sqrt(x*x + y*y + z*z);
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

/*Test case 1:
Give x, y and z components of initial velocity: 3
4
5
Give x, y and z components of acceleration: 1
0
2
Give x, y and z components of initial position: 6
3
4
Give total simulation time: 23
Given simulation time granularity: 0.5

Expected Output for Test case 1:
Time 0 x: 6 y: 3 z: 4
Time 0.5 x: 7.625 y: 5 z: 4
Time 1 x: 9.5 y: 7 z: 4
Time 1.5 x: 11.625 y: 9 z: 4
Time 2 x: 14 y: 11 z: 4
Time 2.5 x: 16.625 y: 13 z: 4
Time 3 x: 19.5 y: 15 z: 4
Time 3.5 x: 22.625 y: 17 z: 4
Time 4 x: 26 y: 19 z: 4
Time 4.5 x: 29.625 y: 21 z: 4
Time 5 x: 33.5 y: 23 z: 4
Time 5.5 x: 37.625 y: 25 z: 4
Time 6 x: 42 y: 27 z: 4
Time 6.5 x: 46.625 y: 29 z: 4
Time 7 x: 51.5 y: 31 z: 4
Time 7.5 x: 56.625 y: 33 z: 4
Time 8 x: 62 y: 35 z: 4
Time 8.5 x: 67.625 y: 37 z: 4
Time 9 x: 73.5 y: 39 z: 4
Time 9.5 x: 79.625 y: 41 z: 4
Time 10 x: 86 y: 43 z: 4
Time 10.5 x: 92.625 y: 45 z: 4
Time 11 x: 99.5 y: 47 z: 4
Time 11.5 x: 106.625 y: 49 z: 4
Time 12 x: 114 y: 51 z: 4
Time 12.5 x: 121.625 y: 53 z: 4
Time 13 x: 129.5 y: 55 z: 4
Time 13.5 x: 137.625 y: 57 z: 4
Time 14 x: 146 y: 59 z: 4
Time 14.5 x: 154.625 y: 61 z: 4
Time 15 x: 163.5 y: 63 z: 4
Time 15.5 x: 172.625 y: 65 z: 4
Time 16 x: 182 y: 67 z: 4
Time 16.5 x: 191.625 y: 69 z: 4
Time 17 x: 201.5 y: 71 z: 4
Time 17.5 x: 211.625 y: 73 z: 4
Time 18 x: 222 y: 75 z: 4
Time 18.5 x: 232.625 y: 77 z: 4
Time 19 x: 243.5 y: 79 z: 4
Time 19.5 x: 254.625 y: 81 z: 4
Time 20 x: 266 y: 83 z: 4
Time 20.5 x: 277.625 y: 85 z: 4
Time 21 x: 289.5 y: 87 z: 4
Time 21.5 x: 301.625 y: 89 z: 4
Time 22 x: 314 y: 91 z: 4
Time 22.5 x: 326.625 y: 93 z: 4
Time 23 x: 339.5 y: 95 z: 4

Test case 2:
Give x, y and z components of initial velocity: 42
36
37
Give x, y and z components of acceleration: 2.3
0.17
1.37
Give x, y and z components of initial position: 3.05
25.6
12.9
Give total simulation time: 10
Given simulation time granularity: 0.25

Expected Output for Test case 2:
Time 0 x: 3.05 y: 25.6 z: 12.9
Time 0.25 x: 13.6219 y: 34.6053 z: 12.9
Time 0.5 x: 24.3375 y: 43.6213 z: 12.9
Time 0.75 x: 35.1969 y: 52.6478 z: 12.9
Time 1 x: 46.2 y: 61.685 z: 12.9
Time 1.25 x: 57.3469 y: 70.7328 z: 12.9
Time 1.5 x: 68.6375 y: 79.7912 z: 12.9
Time 1.75 x: 80.0719 y: 88.8603 z: 12.9
Time 2 x: 91.65 y: 97.94 z: 12.9
Time 2.25 x: 103.372 y: 107.03 z: 12.9
Time 2.5 x: 115.237 y: 116.131 z: 12.9
Time 2.75 x: 127.247 y: 125.243 z: 12.9
Time 3 x: 139.4 y: 134.365 z: 12.9
Time 3.25 x: 151.697 y: 143.498 z: 12.9
Time 3.5 x: 164.138 y: 152.641 z: 12.9
Time 3.75 x: 176.722 y: 161.795 z: 12.9
Time 4 x: 189.45 y: 170.96 z: 12.9
Time 4.25 x: 202.322 y: 180.135 z: 12.9
Time 4.5 x: 215.338 y: 189.321 z: 12.9
Time 4.75 x: 228.497 y: 198.518 z: 12.9
Time 5 x: 241.8 y: 207.725 z: 12.9
Time 5.25 x: 255.247 y: 216.943 z: 12.9
Time 5.5 x: 268.838 y: 226.171 z: 12.9
Time 5.75 x: 282.572 y: 235.41 z: 12.9
Time 6 x: 296.45 y: 244.66 z: 12.9
Time 6.25 x: 310.472 y: 253.92 z: 12.9
Time 6.5 x: 324.637 y: 263.191 z: 12.9
Time 6.75 x: 338.947 y: 272.473 z: 12.9
Time 7 x: 353.4 y: 281.765 z: 12.9
Time 7.25 x: 367.997 y: 291.068 z: 12.9
Time 7.5 x: 382.738 y: 300.381 z: 12.9
Time 7.75 x: 397.622 y: 309.705 z: 12.9
Time 8 x: 412.65 y: 319.04 z: 12.9
Time 8.25 x: 427.822 y: 328.385 z: 12.9
Time 8.5 x: 443.137 y: 337.741 z: 12.9
Time 8.75 x: 458.597 y: 347.108 z: 12.9
Time 9 x: 474.2 y: 356.485 z: 12.9
Time 9.25 x: 489.947 y: 365.873 z: 12.9
Time 9.5 x: 505.838 y: 375.271 z: 12.9
Time 9.75 x: 521.872 y: 384.68 z: 12.9
Time 10 x: 538.05 y: 394.1 z: 12.9
*/
