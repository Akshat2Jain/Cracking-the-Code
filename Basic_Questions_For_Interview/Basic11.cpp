#include <bits/stdc++.h>

using namespace std;
// Swap the Values of Two Variables Without Using any Extra Variable
int main()
{
    int x = 3;
    int y = 4;
    cout << x << y;
    cout << endl;
    x = x + y;
    y = x - y;
    x = x - y;

    cout << x << y;
}