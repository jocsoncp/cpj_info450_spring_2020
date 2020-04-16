#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h> 
using namespace std;
int main()
{
    
    ofstream write("randoms.txt");
    if (!write)
    {
        cout << "Cannot open file" << endl;
        return 1;
    }
    srand(time(NULL));
    for (int x = 1000; x != 0; x--)
    {
        int num;
        num = rand() % 20000 + -10000;
        write << num << endl;
    }
    write.close();
    return 0;
}
