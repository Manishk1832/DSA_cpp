#include <iostream>
using namespace std;

void SelectionSort(int arr[], int n)
{
    for (int count = 0; count < n - 1; count++)
    {
        int last = n - count;
        int max = last;
        for (int i = 0; i <= last; i++)
        {
            if (arr[max] < arr[i])
            {
                max = i;
            }
        }
        // Swap
        int temp = arr[max];
        arr[max] = arr[last];
        arr[last] = temp;
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

    SelectionSort(arr, n);
    for (int print : arr)
    {
        cout << print << endl;
    }
}