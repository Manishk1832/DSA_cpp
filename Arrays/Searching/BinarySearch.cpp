#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n = 5;
    int key = 0;
    int arr[] = {10, 49, 59, 80, 20};
    int ans = BinarySearch(arr, n, key);
    cout << ans;
}