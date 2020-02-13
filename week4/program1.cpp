    #include <iostream>
    #include <stdio.h>

    using namespace std;

    int main()
    {
    double mean;
    double meanStandard;
    double standard;
    double my_num[10];
    double standards[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter the number for index " << i << ": ";
        cin >> my_num[i];
        mean = mean + my_num[i];
    }
    mean = mean / 10;
    for (int i = 0; i < 10; i++)
    {
        standards[i] = (my_num[i] - mean) * my_num[i];
        meanStandard = meanStandard + standards[i];
    }
    standard = (standard / 10);
    standard = sqrt(standard);
    cout << "results, " << mean << ", " << standard;

    return 0;
}