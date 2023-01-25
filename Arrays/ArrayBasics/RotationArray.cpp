#include <iostream>
using namespace std;

void rotate(int arr[], int n, int rot)

{
    rot = rot % n;

    for (int r = 0; r < rot; r++)
    {
        int temp = arr[n - 1];

        for (int i = n - 2; i >= 0; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[0] = temp;
    }
}

int main()
{
    int n = 5;
    int arr[] = {10, 20, 30, 40, 50};
    rotate(arr, n, 5);

    for (int display : arr)
    {
        cout << display << " ";
    }
}