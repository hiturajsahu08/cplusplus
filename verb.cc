#include <iostream>
#include<cstring>

using namespace std;

/*abstract class*/
class verb{
    protected:
        string root;
    public:
        string getRoot(){
            return root;
        }
    virtual string getPastTense() =0;
};
/*1st derived class*/
class regular : public verb{
    
    public:
        /*constructor, to initialize the object*/
        regular(string r)
        {
            root =r;
        }
        /*member function to get past tense*/
        string getPastTense()
            {
                return root + "ed";
            }
};
/*2nd derived classs*/
class irregular : public verb{
    protected:
        string pst;
    public:
        /*constructor, to initialize the object*/
        irregular(string rt, string p)
        {
            root =rt;
            pst =p;
        }
        string getPastTense()
            {
                return pst;           
            }
};

int main()
{
    
    char idx;
    verb *v1;
    string query;
    regular r[2] = {regular("play"), regular("watch")};
    irregular ir[3] = {irregular("is", "was"), irregular("drink", "drunk"), irregular("go", "went")};
    do{
        bool Found = false;
        cout << "enter a verb to get past tense of it"<<endl;
        cin >> query;
        /*search in regular verb list and find it's past tense*/
        for(idx=0; idx<2 ; idx++)
        {
            
            v1 = &r[idx];
            if(v1->getRoot() == query)
            {
                Found = true;
                cout << "we have found your verb"<<endl;
                cout << "the past of tense of Verb = "<< v1->getRoot() << endl;
                cout << " is = "<< v1->getPastTense() << endl;
                break;
            } //end of if
        } // end of for
        if(Found == true)
            continue;
        /*search in irregular verb list and find it's past tense*/
        for(idx=0; idx<3 ; idx++)
        {
            v1 = &ir[idx];
            if(v1->getRoot() == query)
            {
                Found = true;
                cout << "we have found your verb"<<endl;
                cout << "the past of tense of Verb = "<< v1->getRoot() << endl;
                cout << " is = "<< v1->getPastTense() << endl;
                break;
            } //end of if
        } // end of for
        if(Found == false)
            cout<< "Try again" << endl;
    }while(true);
    return 0;
};