#include <iostream>

using namespace std; 

struct Book{
    char title[50];
    char authors[100];
    double price;
    int accNum;
    bool checkOutStatus;
    int claimantId;
    int borrowerId;
};
struct Patron{
    char name[50];
    char address[100];
    int uniqueId;
    int numBooksChkdOut;
    int claimedBookAccNum;
    int borrowedAccNum[3];
};

void checkOutBook(Patron &currPatron, Book &currBook)
{
        if (currPatron.numBooksChkdOut < 3) 
        {
            if (currBook.checkOutStatus == true) 
            {
                cout << "Sorry! Book " << currBook.title;
                cout << " (Accession # " << currBook.accNum << ")";
                cout << "already checked out!" << endl;
                return;
            }
            else 
            {
                if ((currBook.claimantId != -1) &&
                (currBook.claimantId != currPatron.uniqueId)) 
                {
                    cout << "Sorry! There is already a pending claim on book ";
                    cout << currBook.title << " (Acc # " << currBook.accNum << ") ";
                    cout << " by a different patron." << endl;
                    return;
                }
                else 
                {
                    currBook.checkOutStatus = true;
                    currPatron.numBooksChkdOut ++;
                    if (currBook.claimantId ==currPatron.uniqueId) 
                    {
                        currPatron.claimedBookAccNum = -1;
                        currBook.claimantId = -1;
                    }
                return;
                }
            }
        }
        else
        { 
            cout << "Sorry! Three books have already checked";
            cout <<"out by"<< currPatron.name << endl;
            return;
        }
}

void claimBook(Patron &currPatron, Book &currBook)
{
    if((currPatron.numBooksChkdOut ==3 ) || (currPatron.claimedBookAccNum != -1))
    {
        cout << "Sorry! Patron " << currPatron.name;
        cout << " no longer allowed to claim any book."<< endl;
        return;
    }
    if(currBook.checkOutStatus == false)
    {
        cout << "book "<< currBook.title;
        cout << " (Acc. #" << currBook.accNum << ")";
        cout << "not yet checked out. No need for a claim." << endl;
        return;
    }
    if((currBook.claimantId != -1) &&  (currBook.claimantId != currPatron.uniqueId))
    {
        cout << "Sorry! Book already claimed by a Patron"<< endl;
        return;
    }
    if (currBook.borrowerId == currPatron.uniqueId) 
    {
        cout << "Claimed book checked out by same patron." << endl;
    }
    else 
    {
        currPatron.claimedBookAccNum = currBook.accNum;
        currBook.claimantId = currPatron.uniqueId;
    }
    return;
}

void retrunBook (Patron &currPatron, Book &currBook)
{
    if(currBook.borrowerId == currPatron.uniqueId)
    {
        currPatron.numBooksChkdOut--;
        currBook.checkOutStatus =false;
        for (int i = 0; i < 3; i++) 
        {
            if (currPatron.borrowedAccNum[i] == currBook.accNum) 
            {
                currPatron.borrowedAccNum[i] = -1; 
                break;
            }
        }
        currBook.borrowerId = -1;
    }
    else
    {
        cout << "Something strange!";
        cout << "Returning somebodys else's book?" <<endl;
    }    
    return;  
}

int main()
{
    int idx, idx_2;
    Patron libraryPatrons[200];
    Book libraryShelf[1000];
    Patron currPatron;
    Book currBook;
    for(idx = 0 ; idx <200 ; idx++)
    {
        libraryPatrons[idx].numBooksChkdOut = 0;
        libraryPatrons[idx].claimedBookAccNum = -1;
        for(idx_2 = 0 ; idx_2 <3 ; idx_2++)
             {libraryPatrons[idx].borrowedAccNum[idx_2] = -1;}
    }
    // currPatron = &libraryPatrons[0];
    // currBook = &libraryShelf[0];
    
    cout<<"\nEnter book name : ";
    cin>> currBook.title;
    cout << "\nEnter Author of book : ";
    cin >> currBook.authors;
    cout << "\nEnter price of book: ";
    cin >> currBook.price;
    cout << "\nEnter account number of book: ";
    cin >> currBook.accNum;
    cin>>currPatron.numBooksChkdOut;
    // checkOutBook(currPatron, currBook);
    libraryPatrons[0] = currPatron;
    libraryShelf[0]= currBook;
    return 0;
}