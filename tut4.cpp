#include <iostream>

// local variabe takes precedence than global variable
using namespace std;
int glo=6;
void sum(){
    int a;
    cout <<glo;
}
int main(){
    int glo = 12;
    glo = 99;
    // int a=5;
    // int b=6;
    int a=11 , b=22;
    float pi = 3.14 , g = 9.81 ;
    char c = 'x';
    bool one_piece = true ;
    sum();
    cout <<"Variables Scope and Data Types." "\nHere the value of a is " <<a<<
    ".\nAnd the value of b is " <<b<<"." 
    "\nThe values of pi and g are " <<pi<< " and " <<g<< " respectively."
    "\nThe value of c is "<<c<<
    "\nvalue of glo is " <<glo<<
    "\nand the one piece is " <<one_piece ;
    return 0;
}