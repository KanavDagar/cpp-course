// Virtual Functions in C++

// We know that if a pointer of class A points to obj of class b , when executing the display , it will run from the class form which pointer belongs
//  To solve this issue we use virtual functions

#include <iostream>
using namespace std;

class base
{
public:
    int var_base = 10;
    virtual void display() //---> now if the pointer points to derived class then derived class's display will run
    {
        cout << "This was generated using base class's display function" << endl;
        cout << "The value of base class variable is " << var_base << endl;
    }
};

class derived : public base
{
public:
    int var_derived = 20;
    void display()
    {
        cout << "This was generated using derived class's display function" << endl;
        cout << "The value of base class variable is " << var_base << endl;
        cout << "The value of derived class variable is " << var_derived << endl;
    }
};

int main()
{
    base *base_pointer;
    base obj_base;
    derived obj_derived;

    base_pointer = &obj_derived;
    base_pointer->display();

    return 0;
}