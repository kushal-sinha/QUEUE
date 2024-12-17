#include <iostream>
using namespace std;

class Teacher
{
public:
    void teaching()
    {
        cout << "Teaching ..." << endl;
    }
};
class Researcher
{
public:
    void Research()
    {
        cout << "Researching ..." << endl;
    }
};

class Professor : public Teacher, public Researcher
{
public:
    void bore()
    {
        cout << "Boring ...." << endl;
    }
};
int main()
{
    Professor p;
    p.teaching();
    p.Research();
    p.bore();
    return 0;
}