// Pointers to Derived Classes in C++

#include <iostream>
using namespace std;

class base
{
public:
    int var_base;
    void display()
    {
        cout << "This was generated using base class's display function" << endl;
        cout << "The value of base class variable is " << var_base << endl;
    }
};

class derived : public base
{
public:
    int var_derived;
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

    base_pointer->var_base = 12;
    // base_pointer -> var_derived = 24; // ---> this will through error since pointer is of base class
    base_pointer->display(); //--->This is working since pointer is of base class even though the object it points to is of derived class
                             // --->the above process is called as late binding

    derived *derived_pointer;
    derived_pointer = &obj_derived;
    derived_pointer->var_base = 22;
    derived_pointer->var_derived = 24;
    derived_pointer->display();

    return 0;
}