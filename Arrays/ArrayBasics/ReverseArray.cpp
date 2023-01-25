#include <iostream>
using namespace std;

void reverse(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
}

int main()
{
    int n = 5;
    int arr[] = {10, 20, 40, 59, 90};
    reverse(arr, n);
    for (int ali : arr)
    {
        cout << ali << " ";
    }
}