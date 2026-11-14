// Parameterized and Default Constructors In C++
#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int x, int y);
    complex(void);

    void print(void)
    {
        cout << "your number is " << a << " +i" << b << endl;
    }
};

complex::complex(int x, int y) // this is a parameterized constructor since it takes arguments
{
    a = x;
    b = y;
}

complex::complex(void) //---> this is a default constructor since it takes no arguments
{
    a = 1;
    b = 11;
}
int main()
{
    complex c1(2, 5); //---> this is a implicit call
    c1.print();

    complex c2 = complex(6, 7); //---> this is a explicit call
    c2.print();

    complex c3;
    c3.print();

    return 0;
}