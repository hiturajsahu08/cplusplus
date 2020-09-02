// Main function of the C++ program. session 28 inheritence

#include <iostream>
using namespace std;

class base {   
    public:   
    int id;   
    float balance;   
    char name[];
};
class savings : public base {
    public: int age;
    long int ATM;
};
class current : public base {
    public :int amount;
    int overdraft;
};
int main() {
    savings s;
    s.id = 1024;
    s.age = 20;
    s.ATM = 5;
    cout << s.id <<  s.age << endl ;
    current c;
    c.id = 1001;
    c.amount = 15000;
    cout << c.id <<  c.amount<< endl;
    return 0;
}

/* Output:
102420
100115000
*/