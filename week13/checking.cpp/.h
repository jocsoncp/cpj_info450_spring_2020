#include <iostream>

#include "account.cpp/.h"

using namespace std;

class Checking : public Account 
{
    private:
        int last10checks[10];
        double last10amount[10];
        int check = 0;
    public:
        void WriteCheck(int checknum, double amount)
        {
            SetBalance(GetBalance() - amount);
            numwithdraws++;
            last10checks[check] = checknum;
            last10amount[check] = amount;
            check++;
            if (check>=9)
            {
                check=0;
            }
            
        }

        int checking();
        int checking(string name, long taxID, double balance);

        void display();

};

void Checking::display()
{
    cout << "Accounts check register: " << endl;
    for (int n = 0; n < 10; n++)
    {
        cout << endl;
        cout << "Check Number: " << last10checks[n] << endl;
        cout << "Amount: $" << last10amount[n] << endl;

    }
    cout << endl;
    cout << "Balance: " << GetBalance() << endl;

}
