#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

string freqWord(string &str)
{
    map<char, int> mp;
    string ans = "";
    for (int i = 0; i < str.size(); i++)
    {
        mp[str[i]]++;
    }
    for (auto i : mp)
    {
        ans += i.first + to_string(i.second);
    }
    return ans;
}

int main()
{
    // input=aaabbbbeeffgg;
    // output=a3b4e2f2g2;

    string str = "aaabbbbeeffgg";
    string res = freqWord(str);
    cout << res;
}