// 125. Valid Palindrome

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int n = s.size();
    string temp1 = "";
    string temp2 = "";
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= '0' && s[i] <= '9')
        {
            temp1 += s[i];
        }
    }
    temp2 = temp1;
    reverse(temp1.begin(), temp1.end());
    if (temp2 == temp1)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}
