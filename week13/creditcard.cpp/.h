#include <iostream>
using namespace std;

class CreditCard : public Account
{
    public:
        long cardnumber;
        string last10charges[10];

        void DoCharge(string name, double amount)
        {
            SetBalance(GetBalance() - amount);
            numwithdraws++;

        }

        void MakePayment(double amount)
        {
            SetBalance(GetBalance() + amount);
            numdeposits++;
        }

        int creditcard();
        int creditcard(string name, long taxID, double balance);

        void display();

};

