#include <iostream>

using namespace std;
// reference variables and typecasting
int c=20;

int main()
//*****************built in data types****************************
{ int a , b , c;
    cout<< "enter the value of a : ";
    cin >>a;
    cout << "enter the value of b : ";
    cin >>b;
    c = a+b;
    cout<<"then value of c is a+b , i.e ";
    cout<<c;
    cout<< "\nalso the global value of c is : "<<::c;
    // to get global value of c we use ::c. here :: is called as scope resolution operator

    //*****************float, doubles and long double literals****************************

    float d=21.1f;
    long double e=21.1l; //long double is also a variable type with more range than float. unsurprisingly taking more bit and memory
    cout<< "\nthe value of d is : "<<d<<endl;
    cout<<"the value of e is : "<<e<<endl;
    // generally if we pass 21.1 in a function then it will be identified as a double but if we end the number and include 'f' then it will be identified as a float
    // similarly we can use 'l' for long double. also f and l can be F and L also
    cout << "size of 21.1 is : "<<sizeof(21.1)<<endl;
    cout << "size of 21.1f is : "<<sizeof(21.1f)<<endl;
    cout << "size of 21.1F is : "<<sizeof(21.1F)<<endl;
    cout << "size of 21.1l is : "<<sizeof(21.1l)<<endl;
    cout << "size of 21.1L is : "<<sizeof(21.1L)<<endl;

    //*****************reference variables****************************
    // eg. rohan is called monty, roh, etc but these are altogether the same person.
    // so variables that are same but called different
    float x=2323, & y=x;
    cout << "value of x is :" <<x <<endl <<"value of y is also "<<y;

    // ***************** typecasting **************************
    int k=22;
    float l=13.14;

    cout<<"k canbe coverted into float using this :"<<(float)k<<endl;
    cout<<"k canbe coverted into float using this :"<<float(k)<<endl;

    cout<<"float l can be coverted into int using :"<<(int)l<<endl;
    cout<<"float l can be coverted into int using :"<<int(l)<<endl;

    int m = int(l);

    cout<<"value of m is :"<<m<<endl;
    cout<<"value of k+l is :"<<k+l<<endl;
    cout<<"value of k+int(l) is : "<<k+int(l)<<endl;

    return 0;
}
