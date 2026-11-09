// its not necesarry that the argument passed to a function be int or double etc. it can also be object of a class

#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setdata(int n, int m)
    {
        a = n;
        b = m;
    }

    void setdata_by_sum(complex o1, complex o2) // here we use objects of complex class instead of usual int or other function
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void print(void)
    {
        cout << "the complex number is : " << a << " + i" << b << endl;
    }

} c1, c2, c3;

int main()
{
    c1.setdata(1, 2);
    c1.print();

    c2.setdata(3, 4);
    c2.print();
    
    c3.setdata_by_sum(c1, c2);
    c3.print();

    return 0;
} 