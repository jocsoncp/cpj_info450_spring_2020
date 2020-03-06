#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string a1; 
    cout << "Please enter a string.";
    getline(cin, a1);
    string a1 = reverse(a1);
    cout << a1;
    return 0;
}

string reverse(string a)
{
    string b = "";
    int stop = a.length();
    for (int go = 0; go < a.length(); go++)
    {
        
        string b = b + a[stop];
        stop--;
    }

    return b;
}