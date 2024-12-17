#include <iostream>
using namespace std;
// fubction overloading
//  int add(int a, int b)
//  {
//      return a + b;
//  }
//  int add(int a, int b, int c)
//  {
//      return a + b + c;
//  }
class Vector
{
    int x, y;

public:
    Vector(int x, int y) : x(x), y(y) {};

    // op overloading
    void operator+(const Vector &src)
    {
        this->x += src.x;
        this->y += src.y;
    }

    void display()
    {
        cout << x << " " << y << endl;
    }
};
int main()
{
    Vector v1(2, 4);
    Vector v2(2, 6);
    v1 + v2;
    v1.display();

    return 0;
}