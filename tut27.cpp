// Friend Classes & Member Friend Functions in C++
#include <iostream>
using namespace std;

class complex;

class calc
{
public:
    int sum(int a, int b)
    {
        return a + b;
    }

    int sumrc(complex, complex); // jsut a declaration
    int sumic(complex, complex); // jsut a declaration
};

class complex
{
    int a, b;
    // friend int calc::sumrc(complex o1, complex o2);
    // friend int calc::sumic(complex o1, complex o2);
    // now if the number of functions are more then it could waste time and memory writing all functions as friends in the class
    // so we can declare theh whole calc class as friend of complex class

    friend class calc;

public:
    void setnumber(int n, int m)
    {
        a = n;
        b = m;
    }

    void print(void)
    {
        cout << "your number is " << a << " + i" << b << endl;
    }
};

int calc::sumrc(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int calc::sumic(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex c1, c2;
    c1.setnumber(1, 4);
    c2.setnumber(3, 5);

    calc s1;
    cout << "sum of real part of c1 and c2 is " << s1.sumrc(c1, c2)<<endl;
    cout << "sum of imaginary part of c1 and c2 is " << s1.sumic(c1, c2)<<endl;

    return 0;
}