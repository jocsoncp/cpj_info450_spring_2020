#include <iostream>
using namespace std;

class CreditCard : public Account
{
    private:
        long cardnumber;
        string last10charges[10];
        double last10amount[10];
        int check = 0;
    public: 
        void DoCharge(string name, double amount)
        {
            SetBalance(GetBalance() - amount);
            numwithdraws++;
            last10charges[check] = name;
            last10amount[check] = amount;
            check++;
            if (check>=9)
            {
                check=0;
            }
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

void CreditCard::display()
{
    cout << "Account Charges: " << endl;
    for (int n = 0; n < 10; n++)
    {
        cout << endl;
        cout << "Check Number: " << last10charges[n] << endl;
        cout << "Amount: $" << last10amount[n] << endl;
    }
    cout << endl;
    cout << "Balance: " << GetBalance() << endl;


}

