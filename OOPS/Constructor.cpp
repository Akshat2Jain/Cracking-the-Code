#include <iostream>
using namespace std;

class Rectangle
{
public:
    int len;
    int bre;

    Rectangle() // default constructor
    {
        len = 0;
        bre = 0;
    }
    Rectangle(int x, int y) // parameterized constructor
    {
        len = x;
        bre = y;
    }

    Rectangle(Rectangle &r) // copy construnctor - initialize an obj by anotheter obj
    {
        len = r.len;
        bre = r.bre;
    }

    ~Rectangle() // destructor
    {
        cout << " Destructor is called";
    }
};

int main()
{
    Rectangle r1;
    cout << r1.len << " " << r1.bre;
    cout << endl;

    Rectangle r2(3, 4);
    cout << r2.len << " " << r2.bre;
    cout << endl;
    Rectangle r3 = r2;
    cout << r3.len << " " << r3.bre;
}