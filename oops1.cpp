#include <iostream>
using namespace std;
class STUDENT
{
private:
    string gf;

public:
    int id;
    int age;
    bool present;
    string name;
    int nos;
    int *p;

    STUDENT(int id, int age, bool present, string name, int nos, string gf)
    {
        this->id = id;
        this->age = age;
        this->present = present;
        this->name = name;
        this->nos = nos;
        this->gf = gf;
        this->p = new int[5];
        cout << "Student parameterised ctor called" << endl;
    }

    STUDENT(int id, int age, bool present, string name, int nos)
    {
        this->id = id;
        this->age = age;
        this->present = present;
        this->name = name;
        this->nos = nos;
        cout << "Student parameterised ctor w/o called" << endl;
    };
    ~STUDENT()
    {
        cout << "Student dtor is called" << endl;
    }

    // copy ctor
    STUDENT(const STUDENT &srcobj)
    {
        cout << "Student copy   ctor called" << endl;

        this->id = srcobj.id;
        this->age = srcobj.age;
        this->present = srcobj.present;
        this->name = srcobj.name;
        this->nos = srcobj.nos;
    }

    string getName()
    {
        return gf;
    }
    void setName(string name)
    {
        this->gf = name;
    }
};
int main()
{
    // ctor
    // STUDENT s1(1, 12, 1, "Chota bheem", 1, "Chutki");
    // STUDENT s2 = s1;
    // cout << s1.name << endl;
    // cout << s2.name << endl;

    STUDENT s1(1, 12, 1, "Chota bheem", 1, "Chutki");
    cout << s1.name << endl;
    cout << s1.getName() << endl;
    s1.setName("Kushal");
    cout << s1.getName() << endl;

    return 0;
}