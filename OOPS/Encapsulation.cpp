#include <iostream>
using namespace std;

class ABC
{
private:
    int x;

public:
    void set(int n)
    {
        x = n;
    }
    void get()
    {
        return x;
    }
};

int main()
{
    ABC obj1;
    obj1.set(3);
    cout << obj1.get();
    return 0;
}