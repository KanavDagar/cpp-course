// Virtual Base Class Example in C++

#include <iostream>
using namespace std;

class student
{
protected:
    int roll_no;

public:
    void setnumber(int a)
    {
        roll_no = a;
    }

    void printnumber()
    {
        cout << "Your roll nuber is " << roll_no << endl;
    }
};

class test : virtual public student
{
protected:
    float maths, physics, chemistry;

public:
    void setmarks(int m1, int m2, int m3)
    {
        maths = m1;
        physics = m2;
        chemistry = m3;
    }

    void printmarks()
    {
        cout << "your result is as follows " << endl
             << "Maths : " << maths << endl
             << "Physics : " << physics << endl
             << "Chemistry : " << chemistry << endl;
    }
};

class sports : virtual public student
{
protected:
    float score;

public:
    void setscore(int s)
    {
        score = s;
    }
    void printscore()
    {
        cout << "Your score is : " << score << endl;
    }
};

class result : public test, public sports
{
protected:
    float total;

public:
    void display()
    {
        total = maths + physics + chemistry + score;
        printnumber();
        printmarks();
        printscore();
        cout << "Your total is " << total << " out of 310 " << endl;
        cout << "Your percentage is " << (total / 310) * 100 << "%" << endl;
    }
};

int main()
{
    result r;
    r.setnumber(22);
    r.setmarks(95, 90.5, 85.5);
    r.setscore(8.5);
    r.display();

    return 0;
}