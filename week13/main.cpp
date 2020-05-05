#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "account.cpp/.h"
#include "checking.cpp/.h"
#include "savings.cpp/.h"
#include "creditcard.cpp/.h"

using namespace std; 

int main() 
{
    int key = 1;
    int num;
    string input;
    double moolah;



    Savings a;
    a.SetBalance(100);
    Checking b;
    b.SetBalance(100);
    CreditCard c;
    c.SetBalance(100);

    

    do
    {
        moolah = 0;

        cout << "Checking balance: $" << a.GetBalance() 
        << " Savings balance: $" << b.GetBalance() 
        << " Credit Card Balance: $" << c.GetBalance() << endl;

        cout << "1. Savings Deposit" << endl;
        cout << "2. Savings withdrawal" << endl;
        cout << "3. Checking Deposit" << endl;
        cout << "4. Write A Check" << endl;
        cout << "5. Credit Card Payment" << endl;
        cout << "6. Make A Charge" << endl;
        cout << "7. Display Savings" << endl;
        cout << "8. Display Checking" << endl;
        cout << "9. Display Credit Card" << endl;
        cout << "0. Exit" << endl;
        cin >> key;

        if (key == 0)
        {
            cout << "Exiting: ";
            return 0;
        }
        else if (key == 1)
        {
            cout << "Input savings deposit amount: " << endl;
            cin >> moolah;
            a.MakeDeposit(moolah);
        }
        else if (key == 2)
        {
            cout << "Input savings withdrawl amount: " << endl;
            cin >> moolah;
            a.DoWithdraw(moolah);
        }
        else if (key == 3)
        {
            cout << "Input checking deposit amount: " << endl;
            cin >> moolah; 
            b.MakeDeposit(moolah);
        }
        else if (key == 4)
        {
            cout << "Input check amount" << endl;
            cin >> moolah;
            cout << "Input check number" << endl;
            cin >> num;
            b.WriteCheck(num, moolah);
        }
        else if (key == 5)
        {
            cout << "Input credt card payment:" << endl;
            cin >> moolah;
            c.MakePayment(moolah);
        }
        else if (key == 6)
        {
            cout << "Input charge: " << endl;
            cin >> moolah;
            cout << "Input name: " << endl;
            getline(cin, input);
            c.SetName(input);
            c.DoCharge(input, moolah);
        }
        else if (key == 7)
        {
            a.display();
        }
        else if (key == 8)
        {
            b.display();
        }
        else if (key == 9)
        {
            c.display();
        }
        else
        {
            cout << "Invalid input" << endl;
            return 0;
        }
        

        
    }
    while (key != 0);



    return 0;
}

