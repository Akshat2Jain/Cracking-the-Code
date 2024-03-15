#include <iostream>
using namespace std;

class parent
{
public:
    int x;

private:
    int y;

private:
    int z;
};

class child1 : public parent
{
    // x will remain public
    // y will remain protected
    // z will not be accessible
};

class child2 : private parent
{
    // x will become private
    // y will private
    // z will not be accessible
};

class child3 : protected parent
{
    // x will become private
    // y will private
    // z will not be accessible
};

int main()
{
}