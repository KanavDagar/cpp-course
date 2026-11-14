// Constructor Overloading In C++
// basically the parameters that match with the constructor, that constructor will automatically run

#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int x, int y)
    {
        a = x;
        b = y;
    }

    complex(int x)
    {
        a = x;
        b = 5; //---> fixes value of b so it automatically gives 5
    }

    complex()
    { //---> automatically sets a and b to 0
        a = 0;
        b = 0;
    }

    void print(void)
    {
        cout << "your number is " << a << " +i" << b << endl;
    }
};

int main()
{
    complex c1(1, 7);
    c1.print();

    complex c2(5);
    c2.print();

    complex c3;
    c3.print();

    return 0;
}