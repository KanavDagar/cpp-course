// Basic Exercise On Inheritence In C++

#include <iostream>
#include <cmath>
using namespace std;

class simplecalc
{
    int a, b;

public:
    void getdata1()
    {
        cout << "Enter the value of a : ";
        cin >> a;
        cout << endl;
        cout << "Enter the value of b : ";
        cin >> b;
        cout << endl;
    }
    void display1()
    {
        cout << "The value of a+b is : " << a + b << endl;
        cout << "The value of a-b is : " << a - b << endl;
        cout << "The value of a*b is : " << a * b << endl;
        cout << "The value of a/b is : " << a / b << endl;
    }
};

class scientificcalc
{
    int a;

public:
    void getdata2()
    {
        cout << "Enter the value of a : ";
        cin >> a;
        cout << endl;
    }

    void display2()
    {
        cout << "The value of cos(a) is : " << cos(a) << endl;
        cout << "The value of sin(a) is : " << sin(a) << endl;
        cout << "The value of exp(a) is : " << exp(a) << endl;
        cout << "The value of log(a) is : " << log(a) << endl;
    }
};

class hybridcalc : public simplecalc , public scientificcalc {

};

int main()
{   hybridcalc h1;
    h1.getdata1();
    h1.display1();
    h1.getdata2();
    h1.display2();

    return 0;
}