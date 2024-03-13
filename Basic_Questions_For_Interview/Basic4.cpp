#include <bits/stdc++.h>

using namespace std;

// check palindrom

int main()
{
    int n = 12321;
    int temp = n;
    int ans = 0;
    while (temp != 0)
    {
        int digit = temp % 10;
        ans = ans * 10 + digit;
        temp = temp / 10;
    }
    if (n == ans)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }
}