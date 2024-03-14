#include <bits/stdc++.h>

using namespace std;

// 1
// 2 2
// 3 3 3
// 4 4 4
// 5 5 5 5

int main()
{
    cout << "How Many rows you want to print:";
    int n;
    cin >> n;
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << num << " ";
        }
        cout << endl;
        num++;
    }
}