// Destructor in C++
// Basically destructors free up memory after an object is destroyed or the memory used by constructors after its work is done
// Destoructors neither take an argument nor return any

#include <iostream>
using namespace std;

int count = 0;

class num {
public:
num () {
    count++;
    cout << "constructor is called for object number "<<count<<endl;
}

~num () {
    cout<<"destructor is called for object number "<<count<<endl;
    count--;
}

};

int main(){
    cout<<"entering the main function\n";
    cout<<"creating an object called n1\n";
    num n1;
    {
        cout<<"entering a block\n";
        cout<<"creating 2 more objects inside the block\n";
        num n2,n3;
        cout<<"exiting the block\n";
        //destuctor will be called for n2 and n3 as soon as we exit the block as their scope is limited to the block
    }
    cout<<"returning to main function\n";
    // destructor will be called for n1 as soon as main function ends s its scope is limited to whole mai function
    
    return 0;
}