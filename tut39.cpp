// Protected Access Modifier in C++
// protected members of base class can be inherited but still cant be accessed by outside function

/*
for protected member :
                    public derivation  private derivation   protected derivation
1. private member       not inherited      not inherited       not inherited
2. protected member     protected           private            protected
3. public member        public              private            protected
*/
#include <iostream>
using namespace std;

class base
{
protected:
    int a;

private:
    int b;
};

class derived : protected base
{
};

int main()
{
    base b;
    derived d;
    // cout<<b.a; ---> will show error since a is protected member of both base and derived class

    return 0;
}