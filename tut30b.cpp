#include <iostream>
using namespace std;

class point
{
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }

    void display(void){
        cout<<"your point in catesian coordinate system is ("<<x<<","<<y<<")"<<endl;
    }
};

int main()
{
    point p(1,1);
    point q(-1,1);
    p.display();
    q.display();

    return 0;
}