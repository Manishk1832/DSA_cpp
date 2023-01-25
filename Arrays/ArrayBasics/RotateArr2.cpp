#include <iostream>
using namespace std;

void Rev(int arr[], int s, int e, int n)
{
    int s = 0;
    int e = n - 1;
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

    Rev(arr,  0, n - 1, n);
}

int main()
{
    int n = 5;
    int arr[] = {10, 20, 30, 40, 50};
    int rot = 3;
    Rotate(arr, n, rot);
}