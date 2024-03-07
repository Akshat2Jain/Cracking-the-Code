#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <stack> // for using stack lib

using namespace std;

// here we created stack and then push elements and then pop elements with adding space to it
string reverseWords(string &s)
{
    s += " ";
    stack<string> st;
    int i;
    string str = "";
    for (i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            st.push(str);
            str = "";
        }
        else
            str += s[i];
    }
    string ans = "";
    while (st.size() != 1)
    {
        ans += st.top() + " ";
        st.pop();
    }
    ans += st.top();
    return ans;
}

int main()
{
    // Reverse words in a given string

    // Input: s = “i love programming very much”
    // Output: s = “much very programming love i”

    string str = "i love programming very much";
    string res = reverseWords(str);
    cout << res;
}