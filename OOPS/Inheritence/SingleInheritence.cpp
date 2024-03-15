#include <iostream>
using namespace std;

class parent
{
public:
    parent()
    {
        cout << "Parent Class" << endl;
    }
};

class child : public parent
{
public:
    child()
    {
        cout << "Child class";
    }
};

int main()
{
    child obj;
}
