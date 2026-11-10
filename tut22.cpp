// nesting of member functions in c++
// classes can be defined as extension of structure (in C)
/*another valid syntax for class declaration
    class employee{
    // class declaration
    }kanav,rahul,mannu;
*/

#include <iostream>
#include <string>

using namespace std;

class binary
{
    // class members are private by default so we don't need to write private here
private:
    string s;
    void chk_bin(void); //--> so chk_bin can't be accessed by another user

public:
    void read(void);
    // void chk_bin(void);
    void compliment(void);
    void display(void);
};

void binary::read(void)
{
    cout << "enter a binary number " << endl;
    cin >> s;
}

void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary::compliment(void)
{

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary::display(void)
{
    chk_bin();
    // we can use chk_bin here also instead of main so it always runs when we use compliment function
    cout << "displaying your binary number ";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.compliment();
    b.display();

    return 0;
}