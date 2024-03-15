#include <iostream>
using namespace std;
// Function Overloading

// class sum
// {
// public:
//     void add(int x, int y)
//     {
//         int sum = x + y;
//         cout << sum << endl;
//     }
//     void add(int x, int y, int z)
//     {
//         int sum = x + y + z;
//         cout << sum << endl;
//     }
// };

// int main()
// {
//     sum obj;
//     obj.add(4, 3);
//     obj.add(4, 3, 2);
// }

// Funciton Overriding

class parent
{
public:
    virtual void print()
    {
        cout << "Parent Class" << endl;
    }
    void show()
    {
        cout << "Parent Class" << endl;
    }
};

class child : public parent
{
public:
    void print()
    {
        cout << "child" << endl;
    }
    void show()
    {
        cout << "child Class" << endl;
    }
};

int main()
{
    parent *p;
    child c;
    p = &c; // overiding the
    p->print();
    p->show();
}
