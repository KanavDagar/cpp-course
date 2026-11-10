// Friend Functions in C++

#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setnumber(int n, int m)
    {
        a = n;
        b = m;
    }
    friend complex sumcomplex(complex o1, complex o2); // now sumcomplex can access private members of complex class
    // this doesen't mean that sumcomplex is a member of complex class but rather it has some permission to access pvt mambers of class
    void print()
    {
        cout << "your numners are " << a << " + i" << b << endl;
    }
};

complex sumcomplex(complex o1, complex o2)
{
    complex c3;
    c3.setnumber((o1.a + o2.a), (o1.b + o2.b)); // here it will show error since a and b are private members of class complex
    return c3;
}

int main()
{
    complex c1, c2, sum;
    c1.setnumber(1, 4);
    c1.print();

    c2.setnumber(5, 6);
    c2.print();

    sum = sumcomplex(c1, c2);
    sum.print();

    return 0;
}

/* properties of friend functions
1. since it is not in the scope of the class, it can not be called from object of the class.i.e c1.sumcomplex is invalid
2. can be invoked without help of any object
3. usually contains the objects as arguments
4. can be declared in either the private or public section of the class
5. it cannot access the members directly by their name. it uses object_name.member_name to access any member

*/