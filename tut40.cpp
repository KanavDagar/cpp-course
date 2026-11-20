// Multilevel Inheritance Deep Dive In C++

#include <iostream>
using namespace std;

class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void student::set_roll_number(int r)
{
    roll_number = r;
}

void student::get_roll_number()
{
    cout << "The roll number is " << roll_number << endl;
}

class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void setmarks(float, float);
    void getmarks(void);
};

void exam::setmarks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void exam::getmarks()
{
    cout << "Marks obtained in maths are " << maths << endl;
    cout << "Marks obtained in physics are " << physics << endl;
}

class result : public exam
{
protected:
    float percentage;

public:
    void display();
};

void result::display()
{
    get_roll_number();
    getmarks();
    cout << "The result is " << (maths + physics) / 2 << "%" << endl
         << endl;
}

/* Notes : 
            If inheritence oreder is A--->B--->C then :
        1. A is base class of B and B is base class of C
        2. A--->B--->C is called inheritence path
*/ 
    

int main()
{
    result kanav;
    kanav.set_roll_number(10);
    kanav.setmarks(90.5, 94);
    kanav.display();

    result rudra;
    rudra.set_roll_number(76);
    rudra.setmarks(91.5, 89.5);
    rudra.display();

    return 0;
}