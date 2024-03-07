#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;

bool isPalindrome(string &s1)
{
    int low = 0;
    int high = s1.size() - 1; // these two pointer keeps track of the elements of the string
    while (low < high)
    {
        if (s1[low] != s1[high])
        {
            return false; // at some point if element is not found not equal then return false
        }
        low++;
        high--;
    }
    return true; // if not found any case of false , then return true
}

int main()
{
    // Find the wheather the string is palindrome or not
    // Palindrome means if the reverse of the string is equal or not

    // Do without using the reverse lib

    string s1 = "abbba";
    bool res = isPalindrome(s1);
    if (res)
    {
        cout << "The given string is palindrome";
    }
    else
    {
        cout << "The given string is not palindrome";
    }
}