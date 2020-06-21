#include <iostream>

using namespace std;

int main()
{
    struct Driver
    {
        /* data */
        char name[50];
        int id;
    };
    struct Taxi
    {
        /* data */
        int id;
        Driver *drv;
    };
    // Driver d1;
    Taxi t1;   
    Driver d1={"Shekhar",23};
    t1.id=12;
    // structure pointer as member of a structure
    t1.drv=&d1;    
    cout<< "driver id" << t1.drv->id<<endl;
    return 0;
}