// Revisiting Pointers: new and delete Keywords in C++

#include <iostream>
using namespace std;

int main()
{
    // Basic example of pointers
    int a = 11;
    int *ptr = &a;
    cout << "The value of a is " << *(ptr) << endl;

    // new keyword
    int *p = new int(170); //---> dinamically initialization
    cout << "The value at address of p is " << *p << endl;

    int *arr = new int[3];
    arr[0] = 100;
    *(arr + 1) = 120;
    arr[2] = 130;
    delete[] arr; //---> Free up dinamically allocated memory of array
    cout << "the value of arr[0] is " << arr[0] << endl;
    cout << "the value of arr[1] is " << arr[1] << endl;
    cout << "the value of arr[2] is " << arr[2] << endl;

    return 0;
}