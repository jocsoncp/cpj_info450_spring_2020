#include <iostream>

using namespace std;


class Account 
{
private: 
    string name;
    long taxID;
    double balance;
protected:
    int numdeposits;
    int numwithdraws;
public: 
    void SetName(string n)
    {
        name = n;
    }

    string GetName()
    {
        return name;
    }

    void SetTaxID(long id)
    {
        taxID = id;
    }

    long GetTaxID()
    {
        return taxID;
    }

    void SetBalance(double bal)
    {
        balance = bal;
    }

    double GetBalance()
    {
        return balance;
    }

    double MakeDeposit(double amount)
    {
        balance +=amount;
        numdeposits++;
    }

    int account();
    int account(string name, long taxID, double balance);

    void display();

};

void Account::display()
{
    cout << "Name: "  << GetName() << endl;
    cout << "Tax ID: " << GetTaxID() << endl;
    cout << "Balance: " << GetBalance() << endl;

}
