#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h> 
using namespace std;
int gen();
int main()
{
    int go;
    ofstream write("randoms.txt");
    if (!write)
    {
        cout << "Cannot open file" << endl;
        return 1;
    }
    go = gen();
    write << go << endl;
    write.close();
    return 0;
}

int gen()
{
    int num;
    int count;
    if (count = 1) return 1;
    srand(time(NULL));
    num = rand() % 20000 + -10000;
    return num;
}