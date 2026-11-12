// More on C++ Friend Functions

#include <iostream>
using namespace std;

class c2; //else it will show error since c2 is after c1

class c1
{
    int v1;
    friend void exchange(c1 &, c2 &);

public:
    void indata(int a)
    {
        v1 = a;
    }

    void display(void)
    {
        cout << v1 << endl;
    }
};

class c2
{
    int v2;
    friend void exchange(c1 &, c2 &);

public:
    void indata(int a)
    {
        v2 = a;
    }

    void display(void)
    {
        cout << v2 << endl;
    }
};

// interchanging the private functions of classes c1 and c2
void exchange(c1 &x, c2 &y)
{
    int temp = x.v1;
    x.v1 = y.v2;
    y.v2 = temp;
}

int main()
{
    c1 o1;
    c2 o2;

    o1.indata(12);
    o2.indata(34);
    exchange(o1, o2);

    cout << "value of c1 after exchange becomes : ";
    o1.display();

    cout << "value of c2 after exchange becomes : ";
    o2.display();

    return 0;
}