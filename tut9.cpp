// control structure, if else, switch case statements
// type of structure: sequence , selection , loop
#include<iostream>

using namespace std;

int main()
{
    int age;

    cout<<"tutorial 9"<<endl;
    cout<<"enter your age :";
    cin>>age;
    // selection control structure : if else ladder

    if ((age<18) && (age>0)){
        cout<<"you are a minor, GET THE FK OUTTA HERE"<<endl;

    }
    else if (age==18){
        cout<<"you can be here i guess"<<endl;

    }
    else if (age <0){
        cout << "GET OUT OF THE BALLS FIRST(belly second)";
    }
    else {
        cout<<"cool, you are welcomed here";
    }

     // selection control structure : switch case statements

     switch (age)
     {
     case 18:
        cout<< "cool, that's the same age as me";
        break;
        case 21:
        cout<< "you are probabily in middle of figiuring out how to not get back in end sem";
        break;
        case 60:
        cout<< "you didn't invited me in your retirement party.... ";
        break;
     default:
     cout<<"you aint any special";
        break;
     }

     
return 0;
}
