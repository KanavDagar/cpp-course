// This Pointer in C++

#include <iostream>
using namespace std;

class A
{
    int a;

public:
    // A &setData(int a)
    void setData(int a)
    {
        this->a = a;
        //    This is a keyword which is a pointer which points to the object which invoked the member function
        // return *this;
    }

    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};

int main()
{
    A a;
    a.setData(10);//.getData();
    a.getData();

    return 0;
}