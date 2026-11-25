// Pointers to Objects and Arrow Operator in C++

#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }

    void getdata()
    {
        cout << "Your complex number is " << a << " + i" << b << endl;
    }
};

int main()
{
    // complex c1;
    // complex *ptr = &c1;
    complex *ptr = new complex;
    (*ptr).setdata(2, 5);
    (*ptr).getdata();

    // or we can use the ARROW opertaor as :
    complex *ptr1 = new complex;
    ptr1->setdata(7, 11);
    ptr1->getdata();
    // -> is the arrow operator. here it derefernces and runs the setdata command to which ptr1 is pointing, which is , new complex;

    complex *ptr2 = new complex[3];
    ptr2->setdata(3, 4);
    ptr2->getdata();

    (ptr2 + 1)->setdata(22, 9);
    (ptr2 + 1)->getdata();

    (ptr2 + 2)->setdata(9999, 2222);
    (ptr2 + 2)->getdata();

    return 0;
}