// 242. Valid Anagram

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;
// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
// Input: s = "anagram", t = "nagaram"
// Output: true
// Input: s = "rat", t = "car"
// Output: false

bool isAnagram(string &s, string &t)
{
    unordered_map<char, int> mp1;
    unordered_map<char, int> mp2;

    for (int i = 0; i < s.size(); i++)
    {
        mp1[s[i]]++;
    }
    for (int i = 0; i < t.size(); i++)
    {
        mp2[t[i]]++;
    }
    if (mp1.size() != mp2.size())
    {
        return false;
    }
    for (auto x : mp1)
    {
        if (mp2.find(x.first) == mp2.end())
        {
            return false; // to check whether key is present in map2
        }
        if (x.second != mp2.at(x.first))
        {
            return false; // to check whether key count is same as the count in map2
        }
    }
    return true;
}
int main()
{
    string s = "anagram";
    string t = "nagaram";

    bool res = isAnagram(s, t);
    if (res)
    {
        cout << "This is anagram string";
    }
    else
    {
        cout << "Not anagram";
    }
}