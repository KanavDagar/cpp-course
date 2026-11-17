// Copy Constructor in C++

#include <iostream>
using namespace std;

class number
{
    int a;

public:
    number()
    {
        a = 0;
    }

    number(int num)
    {
        a = num;
    }

    // Copy constructor :-
    number(number &obj)
    {
        cout << "Following was generated using copy constructor" << endl;
        a = obj.a;
    }
    //If not created, compiler creates a copy constructor by itself

    void display(void)
    {
        cout << "the assigned number is " << a << endl;
    }
};

int main()
{
    number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    number z1(z); //---> here copy construtor is invoked
    z1.display();

    z2 = z; // ---> copy consntructor not invoked sice z2 was already created
    z2.display();

    number z3 = z; // ---> copy constructor invoked since z3 is being created
    z3.display();

    return 0;
}