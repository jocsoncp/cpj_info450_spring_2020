#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    int a;
    while (true)
    {
        cout << "Enter a year. Enter -1 to stop execution: ";
        cin >> a;
        if (a == -1)
        {
            cout << "Stopping execution.";
            break;
        }
        if (a%4 == 0)
        {
            if (a%100 == 0)
            {
                if (a%400 ==0)
                {
                    cout << a << " is a leap year.\n";
                }
                else
                {
                    cout << a << " is not a leap year.\n";
                }
            }
            else
            {
                cout << a << " is a leap year.\n";
            }
            
        }
        else
        {
            cout << a << " is not a leap year.\n";
        }
        
    }


}