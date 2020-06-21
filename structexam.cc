#include <iostream>

using namespace std; 

int main()
{
    struct Book{
        double price;
        char title[50];
        int accNum;
    };
    Book mychoice;
    Book yourchoice = {25.6,"Alchemist",71};
    cout << "enter price of book =";
    cin >> mychoice.price ;
    cout <<"my book price is = Rs."<< mychoice.price<<endl;
    cout <<"your book price is = Rs."<< yourchoice.price<<endl;
    return 0;
}