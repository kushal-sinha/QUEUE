#include <iostream>
using namespace std;

class Bird
{
public:
    int age, weight;
    int nol;
    string color;

    void eat()
    {
        cout << "Bird is eating" << endl;
    }

    void Fly()
    {
        cout << "Bird is flying" << endl;
    }
};
class Sparrow : public Bird
{
public:
    Sparrow(string color, int age)
    {
        this->color = color;
        this->age = age;
    }

    void grassing()
    {
        cout << "Sparrow is grassing" << endl;
    }
};

class subsparrow : public Sparrow
{
public:
    subsparrow(string color, int age) : Sparrow(color, age) {}
    subsparrow() : Sparrow("grey", 1) {}
};

class Peigon : public Bird
{
public:
    void guttering()
    {
        cout << "Peigon is guttering" << endl;
    }
};

// class Animal
// {
// public:
//     string color;
//     void eat()
//     {
//         cout << "Animal is eating" << endl;
//     }
// };
// class Dog : public Animal
// {
// public:
//     void bark()
//     {
//         cout << "Dog is barking" << endl;
//     }
// };
int main()
{
    // Dog d1;
    // d1.eat();
    // d1.bark();
    // d1.color = "Black";
    // cout << d1.color << endl;
    // Sparrow s("brown", 4);
    // cout << s.color;
    subsparrow sb("brown", 4);

    sb.age;
    // s.grassing();
    Peigon p;
    p.guttering();
    // p.guttering();
    return 0;
}
