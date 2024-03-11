#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // Move all the # int the begining of the string
    string str = "move#to#start";
    string ans = "";
    string hash = "";
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '#')
        {
            hash += str[i]; // collecting all the hash
        }
        else
        {
            ans += str[i]; // collecting all the non-hash char
        }
    }
    string res = hash + ans; // concatinating the both strings
    cout << res;
}