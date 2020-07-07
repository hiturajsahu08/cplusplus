//section 25 : Default and Copy Constructors

//INCOMPLETE

#include <iostream>
#include <cmath>
using namespace std;
class mystring{
    public:
        char *cArray; int  length;
        mystring(const char intString[])
        {

        }
        ~mystring()
        {
            delete [] cArray; return;
        }
        mystring(const mystring &source) : length(source.length){
            cArray = new char[length+1];
            if(cArray==NULL) {/**/}
            else{
                for (int i=0; i<=length; i++)
                    {
                        cArray[i] = (source.cArray)[i];
                        return;
                    }
            }
        }
}



int main() {
    
    V3 a(0.0, 1.0, 2.0);
    V3 a1 = a, a2;
    a2 = myFunc(a);
    a2.printLength();
    return 0;
}

/* Output:
x: 0 y: 2 z: 4
*/