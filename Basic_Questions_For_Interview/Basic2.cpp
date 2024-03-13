#include <bits/stdc++.h>
using namespace std;

bool isLeapYear(int &year)
{
    if (year % 400 == 0)
    {
        return true;
    }
    if (year % 100 == 0)
    {
        return false;
    }
    if (year % 4 == 0)
    {
        return true;
    }
    return false;
}

int main()
{
    // to check the leap year
    int year = 2022;
    bool res = isLeapYear(year);
    if (res)
    {
        cout << "Yes, leap year";
    }
    else
    {
        cout << "Not leap year";
    }
}