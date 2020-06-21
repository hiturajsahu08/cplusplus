#include <iostream>

using namespace std; 

int main()
{
    struct MystrucType{
        char z;
        int x,y;
    };
    MystrucType p1;
    int a;
    MystrucType * ptrp1, *ptrp2;
    p1 = {'D', 7,9};
    cout << p1.x << p1.y << p1.z<<endl;
    ptrp1 = &p1;
    ptrp2 = &p1;
    *ptrp1 = {'C',2,3};
    //(*pointername).structure_member
     // use this for structure pointer
    cout << (*ptrp1).x << (*ptrp1).y << (*ptrp1).z <<endl;
    //OR
    // use this for structure pointer
    // pointer_name->structure_member
    ptrp2->z = 'E';
    ptrp2->x = 5;
    ptrp2->y = 6;
    cout << ptrp2->x << ptrp2->y << ptrp2->z <<endl;  
    return 0;
}