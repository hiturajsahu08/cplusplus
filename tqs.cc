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
    struct LinkedTaxi{
        int id;
        Driver *drv;
        LinkedTaxi *next;
    };
    LinkedTaxi t1, t2;   
    Driver d1={"Shekhar",23};
    Driver d2={"Aman",24};
    t1.id=12;
    t1.drv=&d1;
    t1.next= NULL;
    t2.id=11;
    t2.drv=&d2;
    t2.next= &t1;
    cout << (t2.next)->drv->name<<endl;
    return 0;
}