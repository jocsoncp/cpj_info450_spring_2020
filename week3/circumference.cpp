#include <iostream>

double calculateCircumference(double radius);

const float PI = 3.14159265358979323846;

using namespace std;

int main ()
{
    double radius;
    double circumference;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    circumference = calculateCircumference(radius);
    cout << "Circumference: " << circumference;

    return 0;
}

double calculateCircumference(double radius)
{
    double circumference;
    circumference = (2 * PI * radius);
    return circumference;

}
