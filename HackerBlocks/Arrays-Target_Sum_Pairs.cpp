#include <iostream>
using namespace std;

void targetSum(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                if (arr[i] < arr[j])
                {
                    cout << arr[i] << " and " << arr[j] << endl;
                }
                else
                {
                    cout << arr[j] << " and " << arr[i] << endl;
                }
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    targetSum(arr, n, target);
}