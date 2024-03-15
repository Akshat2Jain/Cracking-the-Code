#include <iostream>
using namespace std;

class parent1
{
public:
    parent()
    {
        cout << "Parent Class" << endl;
    }
};

class parent2
{
public:
    parent()
    {
        cout << "Parent Class" << endl;
    }
};

class child : public parent1, public parent2
{
}