#include <iostream>
#include <cmath>

using namespace std;

int main (){ 
    
    
    
    while(true){
        
        double c, b;
        double d = 2.0;
        cout << "Enter a positive value, enter \"0\" to stop execution: ";
        cin >> c;

        if(c == 0){
            break;
        }
        else
        {
            b = pow(c, d);
            cout << "Output: " << b << "\n";
        }
        
    }


    return 0;
}