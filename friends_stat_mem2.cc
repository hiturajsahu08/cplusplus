//* Session 27: Friends and Static Members Slides: Friends and Static Members */**/
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
  static void resetCount() {
    count = 0;
    return;
  }
  void printCount() {
    cout << count << endl;
    return;
  }
};
int Point::count;
int main() {
  Point::resetCount();
  Point a, b, c(0.0, 0.0);
  cout << "Count of points ";
  a.printCount();
  return 0;
}

/* Output:
Count of points 3
*/