// call by value and call by reference in c++

#include <iostream>
using namespace std;

int sum(int a , int b){
    int c= a+b;
    return c;
}

// this will not swap a and b
void swap (int a , int b){//temp a b
    int temp = a;         // 4   4 5
    a = b;             // 4   5 5
    b = temp;             // 4   5 4  
}

// // call by reference using pointer
// void swapPointer(int *a , int *b ){
//     int temp = *a;        // 4   4 5
//     *a = *b;              // 4   5 5
//     *b = temp;            // 4   5 4
// }

// call by reference using c++ reference variable
int & swapReferenceVar(int &a , int &b ){
    int temp = a;        // 4   4 5s
    a = b;              // 4   5 5
    b = temp;            // 4   5 4
    return a;
}

int main(){
    int a= 4, b = 5;
    cout<<"the sum of 4 and 5 is "<<sum(a,b)<<endl;
    cout<<"the value of a and b before swapping is "<<a<<" and "<<b<<endl;
    // swap(a,b);// this will not swap a and b
    // swapPointer(&a,&b);// this will swap a and b
    // cout<<"the value of a and b after swapping is "<<a<<" and "<<b<<endl;
    swapReferenceVar(a,b)= 76; // this will swap a and b and also assign 76 to a
    cout<<"the value of a and b after swapping is "<<a<<" and "<<b<<endl;
    
    return 0;
}