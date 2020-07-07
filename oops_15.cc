// Main function of the C++ program.
//Section 22 of OOPS with C++ IITBx
//Access Control And Introduction To Classes
#include <iostream>
#include <cmath>
using namespace std;
class V3 {
    private: 
        double rho, phi, z;
    public:
        double getX() {
            //cout<<"rho = "<<rho<<"\nphi= "<<phi<<"\ncos(phi)= "<<cos(phi)<<"\nrho*cos(phi)= "<<rho*cos(phi)<<endl;
            return (rho*cos(phi));}
        double getY() {
            return (rho* sin(phi));}
        double getZ() {
            return z;}
        void setXYZ(double vx, double vy, double vz){ 
            //cout << vx << vy << vz << endl;
            rho = sqrt(vx*vx+ vy*vy); 
            cout<< "rho is :"<< rho << endl;
            phi = atan(vy/vx);
            cout<< "phi is :"<< phi << endl;
            z = vz; 
            cout<< "z is:" << z << endl;
            return;}

};
   
int main()
{
    V3 a,b,c;
    a.setXYZ(1,2,3);
    cout << a.getX() << endl;
    b.setXYZ(1, 5, 7);
    cout << b.getY() << endl;
    c.setXYZ(1, 4, 1);
    cout << c.getZ() << endl;    
}

/*
Output of the above code is:
rho is :2.23607
phi is :1.10715
z is:3
1
rho is :5.09902
phi is :1.3734
z is:7
5
rho is :4.12311
phi is :1.32582
z is:1
1
*/