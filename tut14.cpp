// structures, unions and enums in c++
// strutures are used to store items of different data types, arrays can only store one type of data type

#include <iostream>
using namespace std;

typedef struct employee
{
    int eId; //4 bytes 
    char favchar; //1 byte
    float salary; //4 byte
    // total memory usage is 9 bytes
    
}ep;
// we can use typedef and ep to replace struct employee with ep. dosent necesarilly have to be ep
 // unions are like structure but provide better memory management
//  we can only use one type of asset at a time in union


  union asset

    {
        int grain; //4 bytes 
        char car; // 1 byte 
        float pounds; //4 bytes
        // here only 4 bytes of memory will be assigned as we can only use one type of asset
    };

int main(){
    struct employee kanav;
    ep rohan;
    kanav.eId = 1;
    kanav.favchar = 'k';
    kanav.salary = 5000000;

    cout<<"kanav's employee is "<<kanav.eId<<endl;
    cout<<"kanav's fav character is  "<<kanav.favchar<<endl;
    cout<<"kanav's salary is "<<kanav.salary<<endl;

    cout<<"\n now we will use union"<<endl;
    union asset a1;
    a1.grain = 44;
    cout<<"the amount of grain in kg is "<<a1.grain<<endl;
    a1.car = 'a';
    cout<<"fav car is "<<a1.car<<endl;
    // but if we now again try cout with a1.grain we will get a garbage value since grain is overwritten with car
    cout<<"the amount of garbage grain is "<<a1.grain<<endl;

    // enums give a integer value to its entries starting from zero

    cout<<"\nnow let's give a try to enums"<<endl;
    enum meal {brakfast, lunch, dinner};
    cout<<brakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    
    cout<<"\nwe can also do this"<<endl;
    meal m1 = lunch;
    cout<<m1;
   

  
    
    
    return 0;
}