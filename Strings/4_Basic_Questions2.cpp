#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <unordered_map>

using namespace std;

char getMaxOccurringChar(string &str)
{
    // We will use hashing for tracking the freq of each char in the string

    unordered_map<char, int> mpp;

    for (int i = 0; i < str.size(); i++)
    {
        mpp[str[i]]++; // this will calculate the freq of each char in string
    }
    int maxi = 0;
    for (auto i : mpp)
    {
        // cout << i.first << "-->" << i.second << endl;
        maxi = max(maxi, i.second); // will calculate the maximum
    }
    for (auto i : mpp)
    {
        if (maxi == i.second)
        {
            return i.first; // return the maximum char
        }
    }
}

int main()
{
    // Return the maximum occurring character in an input string
    // Input: test
    // Output: t
    // Explanation: ‘t’ occurs 2 times in the string

    string str = "helloworld";
    char res = getMaxOccurringChar(str);
    cout << res;
}