#include <iostream>
using namespace std;

void BubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int n = 5;
    int arr[] = {10, 50, 20, -3, 30};
    BubbleSort(arr, n);

    for (int print : arr)
    {
        cout << print << " ";
    }
}