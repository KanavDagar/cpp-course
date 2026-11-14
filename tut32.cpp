// Constructors With Default Arguments In C++

#include <iostream>
using namespace std;

class employee
{
    int salary, bonus;

public:
    employee(int a, int b = 500) //---> if no input given, value of b will automatically be set to 500.
    {
        salary = a;
        bonus = b;
    }

    void print(void)
    {
        cout << "the salary and bonus of employee are " << salary << " and " << bonus << " respectively" << endl;
    }
};

int main()
{
    employee m1(10000, 100);
    m1.print();

    employee m2(1000);
    m2.print();

    return 0;
}