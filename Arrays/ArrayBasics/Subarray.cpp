#include <iostream>
using namespace std;

void display(int arr[], int n, int s, int e)
{
    for (int i = s; i < e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Subarray(int arr[], int n)
{
    for (int s = 0; s < n; s++)
    {
        for (int e = s; e <= n; e++)
        {
            display(arr, n, s, e);
        }
    }
}

int main()
{
    int n = 3;
    int arr[] = {10, 20, 30};
    Subarray(arr, n);
}