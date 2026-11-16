// Dynamic Initialization of Objects Using Constructors
//  means constructor will run according to the input by the user

#include <iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float intrest;
    float returnvalue;

public:
    BankDeposit() {} // ---> this is important so our objects can form without any input and don't show error
    BankDeposit(int p, int y, float i);
    BankDeposit(int p, int y, int i);
    void display();
};

BankDeposit::BankDeposit(int p, int y, float i)
{
    principal = p;
    years = y;
    intrest = i;
    returnvalue = principal;
    for (int f = 0; f < y; f++)
    {
        returnvalue = returnvalue * (1 + intrest);
    }
}

BankDeposit::BankDeposit(int p, int y, int i)
{
    principal = p;
    years = y;
    intrest = float(i) / 100;
    returnvalue = principal;
    for (int f = 0; f < y; f++)
    {
        returnvalue = returnvalue * (1 + intrest);
    }
}

void BankDeposit::display()
{
    cout << "Principal value = " << principal << endl;
    cout << "Return value after " << years << " years is " << returnvalue << endl;
}

int main()
{
    BankDeposit b1, b2, b3;
    int p, y;
    float i;
    int I;

    cout << "enter your principal value :";
    cin >> p;
    cout << endl;
    cout << "enter the number of years you want to deposit you money :";
    cin >> y;
    cout << endl;
    cout << "enter your intrest  rate :";
    cin >> i;
    cout << endl;

    b1 = BankDeposit(p, y, i);
    b1.display();

    cout << "enter your principal value :";
    cin >> p;
    cout << endl;
    cout << "enter the number of years you want to deposit you money :";
    cin >> y;
    cout << endl;
    cout << "enter your intrest  rate :";
    cin >> I;
    cout << endl;

    b2 = BankDeposit(p, y, I);
    b2.display();

    return 0;
}