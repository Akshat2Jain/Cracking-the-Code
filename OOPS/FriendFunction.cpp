#include <iostream>
using namespace std;
// A friend class can access private and protected members of other class in which it is declared as friend.
class A
{
    int x;

public:
    A()
    {
        x = 10;
    }
    friend class B; // friend class
};

class B
{
public:
    void display(A &t)
    {
        cout << endl
             << "The value of x=" << t.x;
    }
};

int main()
{
    A _a;
    B _b;
    _b.display(_a);
    return 0;
}