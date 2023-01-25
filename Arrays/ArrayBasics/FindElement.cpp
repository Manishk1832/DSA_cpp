#include <iostream>
using namespace std;

int Find(int arr[], int element, int n)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n = 5;
    int element = 10;
    int arr[5] = {10, 20, 20, 40, 50};
    int find = Find(arr, element, n);
    cout << find;
}