// Inheritance Syntax & Visibility Mode in C++

#include <iostream>
using namespace std;

class employee
{
public:
    int id;
    float salary;
    employee(int inpid)
    {
        id = inpid;
        salary = 100;
    }
    employee() {};
};

/*
***************Derived class syntax ****************
class {{derived class name}} : {{visibility mode ( either public or private)}} {{base class name}}
 {
class members , methods etc
};


******note******
1. default visibility mode is private
2. private mode : public members of base class are inherited as private members of derived class
3. public mode : public members of base class are inherited as public members of derived class

*/

class programmer : public employee
{    // when we make a derived class , consntructor of base class is called automatically
     // a default constructor of base class is required to run or else code will through error
public:
    programmer(int inpid)
    {
        id = inpid;
    }
    int language_code = 9;
    void getdata()
    {
        cout << id << endl;
    }
};

int main()
{
    employee kanav(1), rohan(2);
    cout << kanav.salary << endl;
    cout << rohan.salary << endl;

    programmer dev(10);
    cout << dev.language_code << endl;
    dev.getdata();
    cout<<dev.id<<endl;  //---> only when visibility mode is public

    return 0;
}