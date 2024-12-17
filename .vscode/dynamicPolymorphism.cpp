#include <iostream>
using namespace std;
class Animal
{
public:
    virtual void Sound()
    {
        cout << "Animal Sound" << endl;
    }
};
class Dog : public Animal
{
public:
    void Sound() override
    {
        cout << "dog Barking" << endl;
    }
};
class Cat : public Animal
{
public:
    void Sound()
    {
        cout << "Cat meow" << endl;
    }
};

void sound(Animal *animal)
{
    animal->Sound(); // poymorphic
};

int main()
{
    Animal *a = new Dog();
    sound(a);
    Animal *b = new Cat();
    sound(b);

    return 0;
}