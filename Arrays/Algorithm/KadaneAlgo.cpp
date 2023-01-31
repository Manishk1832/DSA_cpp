#include <bits/stdc++.h>
using namespace std;

void kadane(int arr[], int n)
{
    int sum = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        if (sum < 0)
        {
            sum = 0;
        }
        ans = max(ans, sum);
    }
    cout << ans;
}

int main()
{
    int n = 7;
    int arr[] = {10, 20, 30, -40, 50, -71, 1000};
    kadane(arr, n);
}
