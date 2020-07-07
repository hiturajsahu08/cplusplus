/** staic variable
 * static variable in class is used to create a variable which is not asssociated with a object
 * it is shared across all the objects
 * count is typical example how static variable could be useful.
 * in other words, when we define a object, this object will not have attribute as 'count' **/
#include <iostream>
#include <string>
using namespace std;
class Point {
 private:
  double x, y;

 public:
  static int count;
  Point() {
    count++;
    return;
  }
  Point(double a, double b) {
    x = a;
    y = b;
    count++;
    return;
  }
};

/**accessing the static varialbe
* this needs to be done outside any function including main function
* double colun is used to access static varible
* class name::static_var **/
int Point::count = 0;

int main() {
  Point a, b, c(0.0, 0.0);
  cout << "Count of points ";
  cout << Point::count << endl;
  return 0;
}

/* Output:
Count of points 3
*/