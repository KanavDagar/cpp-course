// Constructors in Derived Class in C++ Example

#include <iostream>
using namespace std;

class base1
{
    int data1;

public:
    base1(int i)
    {
        data1 = i;
        cout << "base1 class constructor called " << endl;
    }
    void print1()
    {
        cout << "Value of data1 is " << data1 << endl;
    }
};

class base2
{
    int data2;

public:
    base2(int i)
    {
        data2 = i;
        cout << "base2 class constructor called " << endl;
    }
    void print2()
    {
        cout << "Value of data2 is " << data2 << endl;
    }
};

class derived : public base1, public base2
{
    int der1, der2;

public:
    derived(int a, int b, int c, int d) : base1(a), base2(b)
    {
        der1 = c;
        der2 = d;
        cout << "derived class constructor called " << endl;
    }
    void print3()
    {
        cout << "the value of der1 is " << der1 << endl;
        cout << "the value of der2 is " << der2 << endl;
    }
};

int main()
{
    derived obj(1, 3, 55, 43);
    obj.print1();
    obj.print2();
    obj.print3();

    return 0;
}