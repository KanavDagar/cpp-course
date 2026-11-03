// Recursion and Recursive Functions in C++
#include <iostream>
using namespace std;

// Recursion is a process in which a function calls itself again and again until a certain condition is met.
int factorial(int n){
    if (n<=1){
        return 1;
    }else{
        return n * factorial(n-1);
    }
}

int fibonacci( int m){
    if (m<=1){
        return 1;
    }else {
        return fibonacci (m-1) + fibonacci (m-2);
    }
}

int main(){
    int a;
    cout<<"enter a number"<<endl;
    cin>>a;
    cout<<"the factorial of "<<a<<" is "<<factorial(a)<<endl;

    int b;
    cout<<"enter the position in fibonacci series"<<endl; 
    cin>>b;
    cout<<"the value at position "<<b<<" in fibonacci series is "<<fibonacci(b)<<endl;
    
    return 0;
}