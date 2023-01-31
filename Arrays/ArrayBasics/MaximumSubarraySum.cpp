#include <iostream>
using namespace std;

void SubArraySum(int arr[], int n)
{
    for (int s = 0; s < n; s++)
    {
        int ans = 0;

        for (int e = s; e < n; e++)
        {
            ans = ans + arr[e];
            cout << ans;
            cout << endl;
        }
        cout << endl;
    }
}

int main()
{

    int n = 5;
    int arr[] = {10, 20, 30, 40, 50};

    SubArraySum(arr, n);
}