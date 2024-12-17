#include <iostream>
using namespace std;
class ABC
{
public:
    static int x, y;

    void print() const
    {
        cout << "Value of x" << " " << x << "Value of Y" << " " << y << endl;
    }
    // ABC class ka data member hai x , y;
};
int ABC::x;
int ABC::y;
int main()
{
    ABC ob1;
    ob1.x = 1;
    ob1.y = 2;
    ob1.print();
    ABC ob2;
    ob2.x = 6;
    ob2.y = 15;
    ob2.print();
    ob1.print();

    return 0;
}