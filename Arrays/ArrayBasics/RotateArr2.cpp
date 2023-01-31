#include <iostream>
using namespace std;

void Rev(int arr[], int s, int e, int n)
{

    for (int i = 0; i < n; i++)
    {
        if (s < e)
        {
            int temp = arr[s];
            arr[s] = arr[e];
            arr[e] = temp;
            s++;
            e--;
        }
    }
}

void Rotate(int arr[], int rot, int n)
{

    rot = rot % n;
    Rev(arr, 0, n - 1, n);
    Rev(arr, 0, rot - 1, n);
    Rev(arr, rot, n - 1, n);
}

int main()
{
    int n = 5;
    int arr[] = {10, 20, 30, 40, 50};
    int rot = 6;
    Rotate(arr, rot, n);
    for (int print : arr)
    {
        cout << print << " ";
    }
}