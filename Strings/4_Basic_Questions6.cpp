#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <string>
#include <unordered_map>
#include <sstream> // stringstream is a class in the C++ Standard Library that allows you to operate on strings as if they were streams

using namespace std;
// Enter the number of string and then find the most freq word from that string
// input n=3
// i love c++
// i love java
// friend love js
// output : love ( most freq word)
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    string in;
    vector<string> str;
    unordered_map<string, int> mpp;
    for (int i = 0; i < n; i++)
    {
        getline(cin, in);
        stringstream ss(in);
        string word;
        while (ss >> word) // will take out words from each string
        {
            mpp[word]++;
        }
    }
    int maxi = 0;
    for (auto x : mpp)
    {
        maxi = max(maxi, x.second);
    }

    for (auto x : mpp)
    {
        if (maxi == x.second)
        {
            cout << x.first; // will print love cauz of highest freq
        }
    }
}