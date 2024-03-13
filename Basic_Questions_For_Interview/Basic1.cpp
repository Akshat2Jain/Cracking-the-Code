#include <bits/stdc++.h>
using namespace std;

// Write a Program to Find the Factorial of a Number Using Loops and recursion
// input n=5;
// output 120
// explanation 5*4*3*2*1=120

void factLoops(int &n)
{
    int fact = 1;
    for (int i = 5; i > 0; i--)
    {
        fact = fact * i;
    }
    cout << fact;
}
int factRecur(int n)
{
    if (n > 1)
    {
        return n * factRecur(n - 1);
    }
    else
        return 1;
}

int main()
{
    int n = 5;
    // factLoops(n);
    int res = factRecur(n);
    cout << res;
}