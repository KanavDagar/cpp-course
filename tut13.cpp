// arrays and pointers arithmetic in c++
// arrays are collection of item of similar types
// sometimes variable is not em=nough to store all data 
// eg to store marks of 2500 students having differnet variables is not fisable so we define an array with size 2500 to hold all marks

#include <iostream>
using namespace std;

int main(){

    // array example
    int mathmarks[5] = {12,45,98,34,44};
    cout<<"these are math marks"<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;
    cout<<mathmarks[4]<<endl;

    // you can also change the value after int
    
    int scimarks[5]= {44,12,23,45,78};
    cout<<"these are science marks"<<endl;
    cout<<scimarks[0]<<endl;
    cout<<scimarks[1]<<endl;
    scimarks[2]=99;
    cout<<scimarks[2]<<endl;
    cout<<scimarks[3]<<endl;
    cout<<scimarks[4]<<endl;

    // using loop to print array function
    // for arrays, their address is the name itself, eg address of mathmarks[i] is mathmarks itself
    int percentage[5] = {67 , 76, 70, 78, 91};

for (int i = 0; i <= 4; i++)
{
    cout<<"the precentages of student "<<i<<" is "<<percentage[i]<<endl;
}

// pointers and arrays
    int* p = mathmarks;
    cout<<"the value of p at mathsmarks[0] (*p) is "<<*p<<endl;
    cout<<"the value of p at mathsmarks[1] *(p+1) is "<<*(p+1)<<endl;
    cout<<"the value of p at mathsmarks[2] *(p+2) is "<<*(p+2)<<endl;
    cout<<"the value of p at mathsmarks[3] *(p+3) is "<<*(p+3)<<endl;
    cout<<"the value of p at mathsmarks[4] *(p+4) is "<<*(p+4)<<endl;

    return 0;
}