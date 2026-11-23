// Initialization list in Constructors in C++

#include <iostream>
using namespace std;

/*
Syntax :
constructor (argument list) : (initialization section)
{
    constructor body;
};

*/

class Test
{
    int a, b;

public:
    Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i +j)
    // Test(int i, int j) : a(i), b(7 *j)
    // Test(int i, int j) : a(i), b(a +j)
    // Test(int i, int j) : a(b+i), b(j)  ----> This will give garbage valur of a since is initialized first
    {
        cout << "Constructor executed" << endl;
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }
};

int main()
{
    Test t(2, 7);

    return 0;
}