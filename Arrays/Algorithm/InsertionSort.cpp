#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                // shift
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
                }
        arr[j + 1] = temp;
    }
}

int main()
{
    int n = 6;
    int arr[] = {10, 20, 30, 40, 50, 23};
    insertionSort(arr, n);
    for (int print : arr)
    {
        cout << print << " ";
    }
}