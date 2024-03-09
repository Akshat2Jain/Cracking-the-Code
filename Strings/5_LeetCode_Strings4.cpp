// 5_LeetCode_Strings3
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

bool isIsomorphic(string &s1, string &s2)
{
    vector<int> v1(128, -1);
    vector<int> v2(128, -1);
    if (s1.size() != s2.size())
    {
        return false;
    }
    for (int i = 0; i < s1.size(); i++)
    {
        if (v1[s1[i]] != v2[s2[i]])
        {
            return false;
        }
        v1[s1[i]] = v2[s2[i]] = i;
    }
    return true;
}

int main()
{
    string s1, s2;
    cin >> s1 >> s1;

    if (isIsomorphic(s1, s2))
    {
        cout << "They are isomorphic";
    }
    else
    {
        cout << "Not Isomorphic";
    }
}