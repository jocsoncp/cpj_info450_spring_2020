#include <iostream>

#include "account.cpp/.h"

using namespace std;

class Savings : public Account
{
    public:
        void DoWithdraw(double amount)
        {
            SetBalance(GetBalance() - amount);
            numwithdraws++;
        }

        int savings();

        int savings(string name, long taxID, double balance);

        void display();
};

void Savings::display()
{
    cout << "Number of Withdrawls: " << numwithdraws << endl;
    cout << "Number of Deposits: " << numdeposits << endl;
    cout << endl;
    cout << "Balance: $" << GetBalance() << endl;
}