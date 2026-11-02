// inline functions, default arguments and const arguments in c++
#include <iostream>
using namespace std;

// inline function : use them only for a small function, because the compiler will replace the function call with the function code itself, which will increase memory usage if the function is large
/* when to not use incline functions
1. when recursion is used
2.when static variables are used

*/
 int product(int a, int b){
    static int c=0; //this will only run once
    c = c + 2; //this will increase the value of c by 2 every time the function is called, and it will retain its value between function calls
    return (a*b)+c;
}

float moneyRecieved(int currentMoney, float factor=1.04){ // here factor is a default argument
    return currentMoney*factor;
}
// compulsary arguments should be passed first and then default arguments should be passed, otherwise it will give an error
int main(){
    int a,b;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    cout<<"the product is "<<product(a,b)<<endl;
    cout<<"the product is "<<product(a,b)<<endl;
    cout<<"the product is "<<product(a,b)<<endl;
    cout<<"the product is "<<product(a,b)<<endl;
    cout<<"the product is "<<product(a,b)<<endl;

    int money = 10000;
    cout<<"initial amount of money is "<<money<<endl;
    cout<<"savings after one year of intrest = "<<moneyRecieved(money)<<endl;

    cout<<"if you are VIP, you will get  "<<moneyRecieved(money,1.1)<<" after one year"<<endl;//here 1.1 is passed as the value of factor, so the default value of factor is not used
    
    // constant arguments : if we don't want value of a variable to change, we use 'const' to make it constant
    const int x = 5;
    // x = 10; // This would cause an error since x is constant
    cout << "The value of x is : " << x << endl;

    return 0;
}