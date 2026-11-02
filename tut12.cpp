// pointers in c++

#include <iostream>
using namespace std;

int main(){
    // what is a pointer? ---> a data type that holds the address of other data types other data types

    int a=4;
    int* b=&a;
    // &--> (address of)) operator 
    cout<<"the address of a is (usisng &a) "<<&a<<endl;
    cout<<"the address of a is (using b) "<<b<<endl;
    
    // *-->  (value at)dereference operator
    cout<<"the value at address b is "<<*b<<endl;

    // pointer to pointer
    int** c = &b;
    cout<<"the address of b is "<<&b<<endl;
    cout<<"the address of b is "<<c<<endl;
    cout<<"the value at address c is "<<*c<<endl;
    cout<<"the value at address value_at(value_at(c)) is "<<**c<<endl;

    
    return 0;
}