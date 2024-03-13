#include <bits/stdc++.h>

using namespace std;

// Check weahter the number is prime number or not
// print all the prime number till the given number
bool isPrime(int &n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n = 13;
    if (isPrime(n))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    int n1 = 4; // print 1st four prime number
    int num = 2;
    int x = 0;
    while (x < n1)
    {
        if (isPrime(num))
        {
            cout << num;
            num++;
            x++;
        }
        else
        {
            num++;
        }
    }
}