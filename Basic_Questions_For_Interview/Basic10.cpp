#include <bits/stdc++.h>

using namespace std;

//      *
//     ***
//    *****
//   *******

int main()
{
    cout << "How Many rows you want to print:";
    int rows;
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = rows; j >= i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}