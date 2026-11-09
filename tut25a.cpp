// Array of Objects & Passing Objects as Function Arguments in C++
#include <iostream>
using namespace std;

class employee
{
    int id;
    int salary;

public:
    void setid(void)
    {
        salary = 10000;
        cout << "enter id of employee: ";
        cin >> id;
    
    }
    void getid(void)
    {
        cout << "id of this employee is: " << id << endl;
    }
} kanav, aryan, utkarsh, raj;


int main()
{
    // now either we can use the syntax below or we can define an arra for the employees if there is a large number of employee
    // kanav.setid();
    // kanav.getid();
    employee cp[4];

    for (int i = 0; i < 4; i++)
    {
        cp[i].setid();
        cp[i].getid();
    }

    return 0;
}