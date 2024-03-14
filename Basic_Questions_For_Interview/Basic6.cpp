#include <bits/stdc++.h>

using namespace std;
//  Find the Nth Term of the Fibonacci Series
// n=13
// output =233

int fib(int &n)
{
    int first = 0;
    int second = 1;
    int ans;
    if (n == 0)
    {
        return first;
    }
    if (n == 1)
    {
        return second;
    }
    for (int i = 2; i <= n; i++)
    {
        ans = first + second;
        first = second;
        second = ans;
    }
    return ans;
}
int main()
{
    int n = 13;
    cout << fib(n);
}