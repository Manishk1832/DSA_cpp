#include <iostream>
using namespace std;

void SquareSorted(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] * arr[i];
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
    SquareSorted(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}