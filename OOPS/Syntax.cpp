#include <iostream>
using namespace std;

class fruits
{
public:
    string name;
    string color;
};

int main()
{
    fruits apple; // object
    apple.name = "Apple";
    apple.color = "Red";
    cout << apple.name << " " << apple.color;

    cout << endl;

    // By using pointer variable

    fruits *mango = new fruits();
    mango->color = "Yellow";
    mango->name = "Mango";
    cout << mango->name << " " << mango->color;
}