#include <bits/stdc++.h>
using namespace std;

// Armstrong Number
// 1^3+5^3+3^3=153
int main()
{
    int n = 153;
    int temp = n;
    int sum = 0;
    while (temp != 0)
    {
        int digit = temp % 10;
        sum += digit * digit * digit;
        temp = temp / 10;
    }
    if (sum == n)
    {
        cout << "Its a armstrong number";
    }
    else
    {
        cout << "Not armstrong number";
    }
}