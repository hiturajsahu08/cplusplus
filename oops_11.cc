#include <iostream>

using namespace  std;

class Point {
    private:
        double x,y;
    public:
    /*friend function *
    * this function have rights to use privatem members */
    friend bool collinear(Point &p1, Point &p2, Point &p3);
    /**Similarly we can have friend class
     * member fucntions of friend call will have acccess 
     * to all the member function of this class**/    
    /*friend class class_name;*/

}
bool collinear(Point &p1, Point &p2, Point &p3)
{
    double temp;
    temp = p1.x*(p2.y-p3.y) + p2.x*(p3.y-p1.y)+p3.x*(p1.y-p2.y);
    return (temp==0);
}