// constants, manipulators and operator precendence

#include<iostream>
#include <iomanip>

using namespace std;

int main()
{
    // *************use const to make value of a variable constant. if another value is entered , it will show an error
    // const int a=99;
    // int a=8;
    // cout<<"value of a is currently fixed as : "<<a;

    // *****************manipulators help us change how he output is displayed. eg. endl , \n
    int a=7 , b= 23 , c = 244;
    cout<<"the value of a without using setw :"<<a<<endl;
    cout<<"the value of b without using setw :"<<b<<endl;
    cout<<"the value of c without using setw :"<<c<<endl;

// setw(number) gives that much space for values to take. keeping values to right
// setw is running because of #include <iomanip>
    cout<<"the value of a using setw :"<<setw(4)<<a<<endl;
    cout<<"the value of b using setw :"<<setw(4)<<b<<endl;
    cout<<"the value of c using setw :"<<setw(4)<<c<<endl;

    // operator precedence
    int x= 3, y= 7 ;
    int z= ((((x*2)+y)-23)+51);
    // check precedency and associavity of operators on cppreference.com
    cout<<"value of z is :"<<z;

    return 0;
}
