// header files and operator
/* there are two types of header files 
1. system header files: these come with the compiler
2. user defined header files : written by the programmer use "" instead of <>*/
#include<iostream>
// #include "header.h" will create an error if it is not present in the directory
// use "cpp reference for header files" to browse for header files
using namespace std;

int main()
{
    int a=4 , b=9;
    cout <<"this is another lesson on 19 oct 2026";
    cout << "\nfollowing are the operators in c++ :";
    // arithmetic operator 
    cout << "\nsum of a and b is "<<a+b;
    cout << "\ndifferencne of both is "<<a-b;
    cout << "\nproduct of both is "<<a*b;
    cout << "\nratio of both is "<<a/b;
    cout << "\nvalue of a%b is  "<<a%b;
    cout << "\nthe value of a++ is "<<a++;
    cout << "\nthe value of a-- is "<<a--;
    cout << "\nthe value of ++a is "<<++a;
    cout << "\nthe value of --a is "<<--a<<endl;
    cout <<endl;

    // // assignment operators : ussed to assign vaulues to operators
    // int a = 19 , b= 20;
    // // char d = 'd' ;

    // comparison operators : help us compare the values of two variables
    cout << "\nfollowing are the comparison operators in c++ :" <<endl;

    cout << "the value of a == b is "<<(a==b) <<endl;
    cout << "the value of a != b is "<<(a!=b) <<endl; 
    //  != means not equal to
    cout << "the value of a > b is "<<(a>b) <<endl;
    cout << "the value of a < b is "<<(a<b) <<endl;
    cout << "the value of a >= b is "<<(a>=b) <<endl;
    cout << "the value of a <= b is "<<(a<=b) <<endl;
cout << endl;


    // logical operators : similar to comparison operator
    cout << "\nfollowing are the logical operators in c++ :" <<endl;
cout << "the use of logical and operator : value of  ((a==b) && (a<b)) is " <<((a==b) && (a<b)) <<endl;
cout << "the use of logical or  operator : value of  ((a==b) || (a<b)) is " <<((a==b) || (a<b)) <<endl;
cout << "the use of logical not  operator : value of  (!(a==b)) is " <<(!(a==b)) <<endl;
// not operator gives the opposite result of what should have been the result

    return 0;
}
