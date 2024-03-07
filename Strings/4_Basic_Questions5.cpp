#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;

string capitalize(string &str)
{
    for (int i = 0; i < str.size(); i++)
    {
        if (i == 0 || str[i - 1] == ' ') // if its the 1st char then capitalize it or the char before the current char is " ", the capitalize the current char
        {
            str[i] = toupper(str[i]);
        }
    }
    return str;
}

int main()
{
    // capitalize the first letter of each word in a given string. Words must be separated by only one space.
    // Sample Input: cpp string exercises
    // Sample Output: Cpp String Exercises
    string str = "cpp string exercises";
    string res = capitalize(str);
    cout << res;
}