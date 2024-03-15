#include <iostream>
using namespace std;

class parent1
{
public:
    parent1()
    {
        cout << "Parent1 Class" << endl;
    }
};

class parent2
{
public:
    parent2()
    {
        cout << "Parent2 Class" << endl;
    }
};

class child : public parent1, public parent2
{
public:
    child()
    {
        cout << "Child class" << endl;
    }
};

int main()
{
    child obj;
}