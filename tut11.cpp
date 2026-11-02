// break and continue statements in c++

#include<iostream>

using namespace std;

int main(){

   for (int i = 0; i < 4; i++)
   {
    cout<<i<<endl;
    // if cout was written after break, 2 will not print and break have already occured before 2 can print
   
   if (i==2){
    break;
   }
   }
// continue will skip that value and move programme furthur. works AFTER continue cuz if written before it would already have been printed
cout<<endl;
for (int j = 0; j < 5; j++)
{
    
    if (j==2){
        continue;
    }
    cout<<j<<endl;
}


    return 0;
}