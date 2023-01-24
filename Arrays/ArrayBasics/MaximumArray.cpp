#include <bits/stdc++.h>
using namespace std;

int Max(int arr[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int n = 8;
    int arr[] = {10, 20, -4, 50, 99, 198, 12, 25};
    int max = Max(arr, n);
    cout << max;
}