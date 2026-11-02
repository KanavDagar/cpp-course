// functions and function prototypes
// function is one of the crucial part of top down structured programming
// functions are used to break programme and assign different taskd to them

#include <iostream>
using namespace std;

// if sum function was written after main it woul have shown error of not declaring sum. so we use function prototype to declare the function before main
// function prototype
// 
// syntax of function prototype
// type function_name (parameter list);

int sum(int a , int b);
// int sum(int a , b) ---> this will show error as data type of b is not declared
// int sum(int , int) ---> this is also valid as data type of both parameters is declared
void g(void);
// void g() ---> this is also valid as void is default parameter of function

int main(){
    int num1 , num2;
    cout<<"enter the first number"<<endl;
    cin>>num1;
    cout<<"enter the second number"<<endl;
    cin>>num2;
    cout<<"sum of both numbers is "<<sum(num1, num2)<<endl;
    // num1 and num2 are actual parameters or arguments and a and b are formal parameters
    g();
    return 0;

}
int sum(int a , int b){
    // a and b will be taking value from formal parameters num1 and num2
    int c = a+b;
    return c;
    // if we use same name for formal and actual parameters, it will work but it will create confusion.
}
void g(){
    cout<<"hello";
}