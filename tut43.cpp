// Ambiguity Resolution in Inheritance in C++

#include <iostream>
using namespace std;

class base1
{
    int a;

public:
    void greet()
    {
        cout << "Hello world " << endl;
    }
};

class base2
{
    int b;

public:
    void greet()
    {
        cout << "Sup guys how's it going ?" << endl;
    }
};

class derived1 : public base1, public base2
{
    int c;

public:
    // You have to decide which base class's function you want to call
    void greet()
    {
        base1::greet();
    }
};

class derived2 : public base1
{
    int d;

public:
    // If we create another function in the derived class, that function overrides the base class's function
    void greet()
    {
        cout << "This is a default message by derived2 class " << endl;
    }
};

int main()
{
    derived1 obj1;
    obj1.greet();

    derived2 obj2;
    obj2.greet();

    return 0;
}