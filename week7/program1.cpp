#include <iostream>
#include <string>
#include <vector>

using namespace std;
string reverse (string *a);

int main()
{
    string user_input; 
    string re;
    do{
        cout << "Please enter a string.";
        getline(cin, user_input);
        string re = reverse(&user_input);
        cout << re;
    }
    while (!user_input.empty());
    return 0;
}

string reverse(string *a)
{
    string b;
    int stop = a->length() - 1;
    int len = a->length();
    for (int go = 0; go < len; go++)
    {   
        
        char appe = a->at(stop);
        b += appe;
        stop--;
    }

    return b;
}