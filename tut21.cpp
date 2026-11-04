// classes, public and private access modifiers in c++
#include <iostream>
using namespace std;

class Employee
{
    private:
    int a,  b,  c;
    // now a, b ,c cant by accessed externally, they must be assigned values inside the employee setdata

    public :
    int d, e;
    void setdata (int x , int y, int z);
    void getdata (){
        cout <<"the value of a is "<<a<<endl;
        cout <<"the value of b is "<<b<<endl;
        cout <<"the value of c is "<<c<<endl;
        cout <<"the value of d is "<<d<<endl;
        cout <<"the value of e is "<<e<<endl;
    }
    
    
};

void  Employee :: setdata (int x, int y , int z){
    a = x;
    b = y;
    c = z;
}


int main(){
    Employee Kanav;
    // Kanac.a = 23 ; ---> this will show error since a is private
    Kanav.d = 99;
    Kanav.e = 100;
    Kanav.setdata(1,2,3);
    Kanav.getdata();
    return 0;
}