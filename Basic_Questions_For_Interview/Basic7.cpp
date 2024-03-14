#include <bits/stdc++.h>

using namespace std;

// *
// **
// ***
// ****
// *****
// Print Pattern
int main()
{
    cout << "How Many rows you want to print:";
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}