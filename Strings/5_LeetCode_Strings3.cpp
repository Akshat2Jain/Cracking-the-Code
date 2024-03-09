// Sorting of the string without using the sort function
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string countSort(string &str)
{
    vector<int> frq(26, 0);
    // storing the freq of every char in string
    for (int i = 0; i < str.size(); i++)
    {
        int index = str[i] - 'a';
        frq[index]++;
    }
    int j = 0;
    for (int i = 0; i < frq.size(); i++)
    {
        while (frq[i]--)
        {
            str[j++] = i + 'a';
        }
    }
    return str;
}

int main()
{
    string str = "abcbeaa";
    cout << countSort(str) << endl;
}