// Constructors In C++

#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    // constructor is a special member function of the  class which uses the same name as of class
    // it is automatically invoked when an object is created
    // it is used to initialize the objects of its class
    complex(void); // constructor declaration

    void print(void)
    {
        cout << "your number is " << a << " + i" << b << endl;
    }
};

complex::complex(void) // ---> this is a default constructor since it dosen't accept any parameters
{
    cout << "enter real part of your number: ";
    cin >> a;
    cout << endl;
    cout << "enter imaginary part of your number: ";
    cin >> b;
    cout << "yes everything in the constructor gets invoked" << endl;
}

int main()
{
    complex c1, c2, c3;
    c1.print();
    c2.print();
    c3.print();

    return 0;
}

/* Characteristics of constructors
1. It should  be declared in public section of the class
2. They cannot return values and do not have return types
3. It can have default arguments
4. We cannot refer to their address

*/