// Static Data Members & Methods in C++ OOPS
// benefit of static variale is that it is shared by every object
#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count; // now count will only occur once so it will take less memory and will keep on updating as the programme goes on
    // static variable initializes automatically from zero
    // count is static data member of this class
public:
    void setdata(void)
    {
        cout << "enter employee id" << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "the id of this employee is ";
        cout << id << " and the emplpyee count is " << count << endl;
    }

    // ststic functions can only access static members, either function or variable
    static void getcount(void)
    {
        cout << "the value of count is " << count << endl;
        // if we try to print a non static varible , say id, it will show error
    }

} kanav, aman, dev;

// you can't define static variable inside class so you have to define it outside
int employee::count; // we can add +10 so tat count has value of 10 instead of 0

int main()
{
    kanav.setdata();
    kanav.getdata();
    employee::getcount();

    aman.setdata();
    aman.getdata();
    employee::getcount();

    dev.setdata();
    dev.getdata();
    employee::getcount();

    return 0; 
}