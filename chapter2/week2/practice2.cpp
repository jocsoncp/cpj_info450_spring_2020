#include <iostream>
#include <cmath>

using namespace std;

int main(){ 

    int a;
    while(true){
        cout << "Input number: ";
        cin >> a;
        if (a == 0){
           cout << "0 Found, stopping execution.";
           break;
        }
        else if (a == 1){
            cout << a << " is not a prime number.\n";
        }
        else if (a == 2){
            cout << a << " is an prime number.\n";
        }
        else
        {
            
            for (int b = 2; b < a; b++){
                if (a%b == 0){
                    cout << a << "is not a prime number.\n";
                    break;
                }
                else
                {
                    cout << a << " is a prime number.\n";
                    break;
                }
                
            }
            
        }
        
        
    }
    return 0;
}
