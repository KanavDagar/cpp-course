// Function overloading in C++ 
// basically you can assign same function to do different tasks
#include <iostream>
using namespace std;

int sum (int a , int b){
    cout<<"this was returned using function with 2 arguments"<<endl;
    return a + b;
}

int sum (int a, int b, int c){
    cout<<"this was returned using function with 3 arguments"<<endl;
    return a + b + c;
}

float volume ( float r , float h){ //volume of a cylinder
    return (3.14*r*r*h);
}

int volume ( int a ){// volume of a cube
    return(a*a*a);

}

int volume (int l , int b, int h){// volume of cuboid
    return (l*b*h);
}

int main(){
    
    cout <<"the sum of 2 and 3 is "<<sum(2,3)<<endl;

    cout <<"the sum of 2, 3 and 4 is "<<sum(2,3,4)<<endl;

    cout <<"the volume of cylinder of radius 3 and height 4 is "<<volume(3,4)<<endl;
    cout <<"the volume of cube of side 7 is "<<volume(7)<<endl;
    cout <<"the volume of cuboid of length 2 breadth 1 and height 4 is "<<volume(2,1,4)<<endl;


    return 0;
}