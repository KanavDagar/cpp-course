#include <iostream>
using namespace std;

float sum(float a, float b){
    float c = a+b;
    return c;
}
float subtract(float a, float b){
    float c = a-b;
    return c;
}
float multiply(float a, float b){
    float c = a*b;
    return c;
}
float divide(float a, float b){
    float c = a/b;
    return c;
}
    

int main(){
    float a,b;
    char op;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout << "select your mathematical operation (+, -, *, /): " << endl;
    cin>>op;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    if (op == '+'){
        cout<<"the value is "<<sum(a,b)<<endl;
    }
    else if (op == '-'){
        cout<<"the value is "<<subtract(a,b)<<endl;
    }
    else if (op == '*'){
        cout<<"the value is "<<multiply(a,b)<<endl;
    }
    else if (op == '/'){
        if (b == 0){
            cout<<"division by zero is not possible"<<endl;
        }
        else
        cout<<"the value is "<<divide(a,b)<<endl;
    }
    else{
        cout<<"invalid operator"<<endl;
    }
    cout<<"I know its basic but this is my first project in c++";

    return 0;
}