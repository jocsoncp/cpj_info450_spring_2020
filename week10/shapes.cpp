#include <iostream>
using namespace std;
const int PI = 3; // for simplicity, we'll pretend PI is 3
class shape{
  public:
    int get_perimeter_length(){ return -1; }
    int get_area(){             return -1; }
};
class circle : public shape{
  private:
    int ci;
  public:
    circle(int radius){ci = radius; }
    int get_perimeter_length(){ return 2*PI*ci; }
    int get_area(){             return PI*(ci*ci); }
};
class rectangle : public shape{
  private:
    int hei;
    int wid;
  public:
    rectangle(int height, int width){hei = height; wid = width; }
    int get_perimeter_length(){ return 2*(hei+wid); }
    int get_area(){             return hei*wid; }
};
class square : public shape{
  private:
    int sq;  
  public:
    square(int side) {sq=side; }
    int get_perimeter_length(){ return sq*4; }
    int get_area(){             return sq*sq; }
};
int main(){
  shape *s1;
  circle c(3);
  s1 = &c;
  cout << "Perimeter: " << s1->get_perimeter_length() << " : Area " << s1->get_area() << endl;
  square s(3);
  s1 = &s;
  cout << "Perimeter: " << s1->get_perimeter_length() << " : Area " << s1->get_area() << endl;
  rectangle r(4,5);
  s1 = &r;
  cout << "Perimeter: " << s1->get_perimeter_length() << " : Area " << s1->get_area() << endl;
  return 0;
}
