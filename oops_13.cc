#include <iostream>
#include <string>
using namespace std;
class Point {
 private:
  double x, y;
  static int count;

 public:
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
  /**defining a static member function, 
  * here static member function also doesn't associate with any objects, it is shared entity among objects.**/
  static void resetCount() {
    count = 0;
    return;
  }
  void printCount() {
    cout << count << endl;
    return;
  }
};
int Point::count; /*accessing static var outside any function*/
int main() {
  Point::resetCount(); /*invoking static member function, a public one*/ 
  Point a, b, c(0.0, 0.0);
  cout << "Count of points ";
  a.printCount();
  return 0;
}

/* Output:
Count of points 3
*/