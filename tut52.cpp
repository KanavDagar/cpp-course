// Array of Objects Using Pointers in C++

#include <iostream>
using namespace std;

class Shop
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }

    void getData()
    {
        cout << "Item Id is " << id << endl;
        cout << "Price of this item is " << price << endl;
    }
};

int main()
{
    int size = 5;
    int x, i;
    float y;
    Shop *ptr = new Shop[size];
    Shop *ptrTemp = ptr;
    for (i = 0; i < size; i++)
    {
        cout << "Enter id and price of the item " << i + 1 << endl;
        cin >> x >> y;
        ptr->setData(x, y);
        ptr++;
    }

    for (i = 0; i < size; i++)
    {
        cout << "Item number " << i + 1 << endl;
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}