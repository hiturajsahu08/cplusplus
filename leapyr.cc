#include <iostream>

using namespace std;

int main()
{
    int x,yr;
    bool ret;
    cout<<"enter a Year = ";
    cin>>yr;
    if( ((yr%400)== 0) || ( ((yr%4) == 0) && ((yr%100) != 0) ) )
        cout<< yr <<" this is indeed a Leap Year"<<endl;
    else
        cout<< yr <<" it is not a leap year";
    return 0;
}