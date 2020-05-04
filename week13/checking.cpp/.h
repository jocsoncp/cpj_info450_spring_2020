#include <iostream>
using namespace std;

class Checking : public Account 
{
    private:
        int last10checks[10];
    public:
        void WriteCheck(int checknum, double amount)
        {
            SetBalance(GetBalance() + amount);
            numwithdraws+=checknum;
        }

        int checking();
        int checking(string name, long taxID, double balance);

        void display();

};

void Checking::display()
{
    
}
