#include <iostream>
using namespace std;
class abc
{
public:
    int x;
    int *y;

    abc(int _x, int _y) : x(_x), y(new int[_y]) {};
    void print() const
    {
        printf("x:%d\nPTR Y:%p\n Contnet pf (* y):%d\n\n", x, y, *y);
    }
};
int main()
{
    abc a(1, 2);
    a.print();
    return 0;
}