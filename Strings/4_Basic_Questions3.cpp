#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;

string removeChar(string &s1, string &s2)
{
    string ans;

    for (int i = 0; i < s1.size(); i++)
    {
        int flag = 0;
        for (int j = 0; j < s2.size(); j++)
        {
            if (s1[i] == s2[j])
            {
                flag = 1; // keeping the flag if char matches
            }
        }
        if (flag != 1) //  now whoever the char is not matching, add it to the ans string
        {
            ans.push_back(s1[i]);
        }
    }
    return ans;
}

int main()
{
    // Remove characters from the first string which are present in the second string
    //     Input:
    // string1 = “computer”
    // string2 = “cat”
    // Output: “ompuer”
    // Explanation: After removing characters(c, a, t)
    // from string1 we get “ompuer”.

    string s1 = "computer";
    string s2 = "cat";

    string res = removeChar(s1, s2);
    cout << res;
}