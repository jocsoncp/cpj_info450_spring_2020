#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
    string students[30];
    string student;
    int study;
    char a;
    for (int i = 0; i < 30; i++)
    {
        
        cout << "Please enter student for index " << i << ": ";

        getline(cin, students[i]);
        if (students[i] == "")
        {
            break;
        }

    }
    for (int i = 0; i < 30; i++)
    {
        cout << "students[" << i << "] = " << students[i];
    }

    return 0;
}