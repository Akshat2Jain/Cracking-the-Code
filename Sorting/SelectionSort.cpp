#include <iostream>

using namespace std;

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int mini = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; i++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        if (mini != i)
        {
            swap(arr[mini], arr[i]);
        }
    }
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}