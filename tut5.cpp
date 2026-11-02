//basic input output and more
//iostream = inout output stream
//you cannot create variables with the reerved words for c++

#include <iostream>

using namespace std;

int main()
{
    int num1, num2 ;
    /* << is called insertion operator */
    cout << "enter the value of num 1: \n"; 
    // >> is called extraction operator
    cin >>num1;

    cout << "enter the value of num 2: \n"; 
    cin >>num2;

    cout<<"the sum of both the numbers is " <<num1+num2;
    


    return 0;
}
