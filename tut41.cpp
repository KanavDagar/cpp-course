// Multiple Inheritance Deep Dive in C++

#include <iostream>
using namespace std;

/*   *********Syntax********
class {{derived }} : {{visibility mode}} {{base class 1}} , {{visibility mode }} {{base class 2 }}
 {
   code
};
*/

class base1
{
protected:
    int b1;

public:
    void setbase1(int a1)
    {
        b1 = a1;
    }
};

class base2
{
protected:
    int b2;

public:
    void setbase2(int a2)
    {
        b2 = a2;
    }
};

class derived : public base1, public base2
{
public:
    void getdata()
    {
        cout << "The value of b1 is " << b1 << endl;
        cout << "The value of b2 is " << b2 << endl;
        cout << "The sum of b1 and b2 is " << b1 + b2 << endl
             << endl;
    };
};

int main()
{
    derived d1, d2;
    d1.setbase1(15);
    d1.setbase2(20);
    d1.getdata();

    d2.setbase1(12);
    d2.setbase2(1220);
    d2.getdata();

    return 0;
}