// for, while and do-while loops in c++ 
#include <iostream>

using namespace std;

int main()
{
    /* loops in c++
    there are three types of loops in c++:
    1. for loop
    2. while loop
    3. do-while loop*/
    
// for loop....................................
// for loop syntax
// for (initialiation; condition; updation){
//     loop body(c++ code)
// }

    // for (int i = -10; i <= 10; i++)
    // {
    //     cout<<i<<endl;
        
    // }

    // while loop
    // synatx
    // while(conditions)
    // {
    //     C++ statements;
    // }

    // 
    

// printing 1 to 40 using while loop
// int i=1;
// while (i<=40)
// {
//     cout<<i<<endl;
//     i++;
// }

  //do-while loop
    // synatx
    // do
    // {
    //     C++ statements;
    // }while(conditions);
int i=1;
    do

{
    cout<<i<<endl;
    i++;
} while (i<4);
// in do while, loop will run atleast once even if condition is false



    return 0;
}
